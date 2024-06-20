// verilator lint_off WIDTHEXPAND
// verilator lint_off WIDTHTRUNC
// verilator lint_off UNUSEDSIGNAL
// verilator lint_off UNDRIVEN

`timescale 1ns / 1ps
`define CLK_PERIOD 10

module tb_open_list_queue ();

  localparam QUEUE_SIZE = 10;
  localparam DATA_WIDTH = 32;
  localparam MAP_WIDTH = 16;
  localparam MAP_HEIGHT = 16;

  logic                  CLK;
  logic                  RSTn;

  logic                  i_wrt;
  logic                  i_read;
  logic                  i_valid;
  logic [DATA_WIDTH-1:0] i_node_f;
  logic [ MAP_WIDTH-1:0] i_node_i;
  logic [MAP_HEIGHT-1:0] i_node_j;

  logic                  o_empty;
  logic                  o_full;
  logic                  o_valid;
  logic [DATA_WIDTH-1:0] o_node_f;
  logic [ MAP_WIDTH-1:0] o_node_i;
  logic [MAP_HEIGHT-1:0] o_node_j;

  logic [DATA_WIDTH-1:0] data_f;
  logic [ MAP_WIDTH-1:0] data_i;
  logic [MAP_HEIGHT-1:0] data_j;

  open_list_queue #(QUEUE_SIZE, DATA_WIDTH, MAP_WIDTH, MAP_HEIGHT) u_open_list_queue (
      .CLK(CLK),
      .RSTn(RSTn),
      .i_wrt(i_wrt),
      .i_read(i_read),
      .i_valid(i_valid),
      .i_node_f(i_node_f),
      .i_node_i(i_node_i),
      .i_node_j(i_node_j),
      .o_empty(o_empty),
      .o_full(o_full),
      .o_valid(o_valid),
      .o_node_f(o_node_f),
      .o_node_i(o_node_i),
      .o_node_j(o_node_j)
  );

  initial begin : CLK_GENERATION
    CLK = 0;
    forever #(`CLK_PERIOD / 2) CLK = !CLK;
  end

  initial begin : RST_GENERATION
    RSTn = 1;
    #1 RSTn = 0;
    repeat (2) @(negedge CLK);
    RSTn = 1;
  end

  initial begin : TEST

    $dumpfile("tb_open_list_queue.vcd");
    $dumpvars(0, tb_open_list_queue);

    i_wrt = 0;
    i_valid = 0;
    i_node_f = 0;
    i_node_i = 0;
    i_node_j = 0;

    @(posedge RSTn);
    @(posedge CLK);

    write(12, 5, 5);
    write(1, 3, 3);
    write(2, 1, 1);
    write(14, 6, 6);
    write(12, 4, 4);
    write(3, 2, 2);
    // write(0, 0, 0);
    // write(20, 7, 8);
    // write(25, 8, 8);
    // write(13, 9, 9);

    // read(data_f, data_i, data_j);
    $finish();
  end

  task write(input int i_data_f, input int i_data_i, input int i_data_j);
    if (o_full) $display("Error - The queue is full | Data: %d", i_data_f);
    else $display("Write data: %d", i_data_f);

    i_wrt = 1;
    // i_valid = !o_full;
    i_node_f = i_data_f;
    i_node_i = i_data_i;
    i_node_j = i_data_j;

    @(posedge CLK);

    // i_valid = 0;
    i_wrt = 0;

    repeat (3) @(posedge CLK);
  endtask

  // task read(output int o_data_f, output int o_data_i, output int o_data_j);
  //   i_read  = 1;
  //   i_valid = !o_empty;
  //
  //   @(posedge CLK);
  //
  //   o_data_f = o_node_f;
  //   o_data_i = o_node_i;
  //   o_data_j = o_node_j;
  //
  //   if (o_valid) $display("Read data: %d", o_data_f);
  //   else $display("Error - The queue is empty");
  //
  //   i_read = 0;
  // endtask

endmodule
