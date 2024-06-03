// verilator lint_off UNUSEDSIGNAL
// verilator lint_off LATCH
// verilator lint_off UNOPTFLAT

`timescale 1ns / 1ps

module open_list_queue #(
    QUEUE_SIZE = 8,  // Number of slots in each queue
    DATA_WIDTH = 32,  // Data width for node f values
    MAP_WIDTH = 16,  // Width of the map
    MAP_HEIGHT = 16,  // Height of the map
    MAX_F = 32'hFFFFFFFF  // Maximum value for f
) (
    input logic CLK,
    input logic RSTn,

    // Input control signals
    input logic i_wrt,
    input logic i_read,
    input logic i_valid,

    // Node data inputs
    input logic [DATA_WIDTH-1:0] i_node_f,
    input logic [ MAP_WIDTH-1:0] i_node_i,
    input logic [MAP_HEIGHT-1:0] i_node_j,

    // Output control signals
    output logic o_empty,
    output logic o_full,
    output logic o_valid,

    // Node data outputs
    output logic [DATA_WIDTH-1:0] o_node_f,
    output logic [ MAP_WIDTH-1:0] o_node_i,
    output logic [MAP_HEIGHT-1:0] o_node_j
);

  // Node structure
  typedef struct packed {
    logic [DATA_WIDTH-1:0] f;
    logic [MAP_WIDTH-1:0]  node_i;
    logic [MAP_HEIGHT-1:0] node_j;
  } node_t;

  // Internal buffers
  node_t IB[QUEUE_SIZE];
  node_t OB[QUEUE_SIZE];

  // counter for input and output buffers
  int ib_count, ob_count;

  logic empty, full, valid;

  // State machine states
  typedef enum logic [2:0] {
    RESET = 3'b000,
    IDLE  = 3'b001,
    WRITE = 3'b010,
    SORT  = 3'b011,
    READ  = 3'b100
  } state_t;

  state_t current_state, next_state;

  // State machine state update
  always_ff @(posedge CLK or negedge RSTn) begin : STATE_UPDATE
    if (!RSTn) begin
      current_state <= RESET;
    end else begin
      current_state <= next_state;
    end
  end

  // State machine operation
  always_comb begin : STATE_OPERATION

    case (current_state)

      RESET: begin
        ib_count = 0;
        ob_count = 0;
        valid = 0;
        for (int itr = 0; itr < QUEUE_SIZE; itr++) begin : INIT_BUFFERS
          IB[itr] = '{f: MAX_F, node_i: 0, node_j: 0};
          OB[itr] = '{f: MAX_F, node_i: 0, node_j: 0};
        end
        next_state = IDLE;
      end

      IDLE: begin
        if (i_wrt) begin
          next_state = WRITE;
        end else if (i_read) begin
          next_state = READ;
        end  /* else begin
          next_state = IDLE;
        end */
      end

      WRITE: begin
        if (!full) begin
          IB[0] = '{f: i_node_f, node_i: i_node_i, node_j: i_node_j};
          // ib_count = ib_count + 1;
          // valid = i_valid;
          next_state = SORT;
        end else begin
          next_state = IDLE;
        end
      end

      SORT: begin
        for (int itr = 0; itr < QUEUE_SIZE - 1; itr++) begin : BUBBLE_SORT
          if (itr == 0 && OB[itr].f == MAX_F) begin  // if OB[0] is a bubble
            if (IB[itr].f < OB[itr+1].f) begin
              OB[itr] = IB[itr];
              // ob_count = ob_count + 1;
              IB[itr] = '{f: MAX_F, node_i: 0, node_j: 0};
              // ib_count = ib_count - 1;
            end else begin
              OB[itr]   = OB[itr+1];
              OB[itr+1] = '{f: MAX_F, node_i: 0, node_j: 0};
            end
          end else begin  // if OB[0] is not a bubble
            if (IB[itr].f < OB[itr+1].f) begin
              IB[itr+1] = OB[itr+1];
              OB[itr+1] = IB[itr];
              IB[itr]   = '{f: MAX_F, node_i: 0, node_j: 0};
            end
          end
          IB[itr+1] = IB[itr];
        end
        next_state = IDLE;
      end

      READ: begin
        if (OB[0].f != MAX_F) begin
          o_node_f = OB[0].f;
          o_node_i = OB[0].node_i;
          o_node_j = OB[0].node_j;
          OB[0] = '{f: MAX_F, node_i: 0, node_j: 0};
          o_valid = 1;
          // ob_count = ob_count - 1;
        end
        next_state = IDLE;
      end

      default: begin
        next_state = IDLE;
      end
    endcase
  end

  assign empty = ib_count == 0;
  assign full = ib_count == QUEUE_SIZE - 1;

  assign o_empty = ob_count == 0;
  assign o_full = ob_count == QUEUE_SIZE;

endmodule
