module DFF (
    input a,
    input rst,
    input clk,
    output reg b
);
    always @(posedge clk, posedge rst)
    begin
      if(rst)
        b = 0;
      else b = a;
    end
endmodule

module MUX (input a, input b, input sel, output y);
    assign y = (sel)?b:a;
endmodule

module XOR (
  input a,
  input b,
  output c
);
  assign c = a ^ b;
endmodule

module LFSR(
  input [3:0] seed,
  input rst,
  input clk,
  input sel,
  output [3:0] state
);

  wire w1,w2,w3,w4,w5;
  wire w1in,w2in,w3in,w4in,w5in;
  MUX mux0 (.a(seed[3]),.b(w1),.sel(sel),.y(w1in));
  MUX mux1 (.a(seed[2]),.b(w2),.sel(sel),.y(w2in));
  MUX mux2 (.a(seed[1]),.b(w3),.sel(sel),.y(w3in));
  MUX mux3 (.a(seed[0]),.b(w4),.sel(sel),.y(w4in));

  XOR xor0(.a(w4),.b(w5),.c(w1));

  DFF dff0(.a(w1in),.rst(rst),.clk(clk),.b(w2));
  DFF dff1(.a(w2in),.rst(rst),.clk(clk),.b(w3));
  DFF dff2(.a(w3in),.rst(rst),.clk(clk),.b(w4));
  DFF dff3(.a(w4in),.rst(rst),.clk(clk),.b(w5));

  assign state = {w2,w3,w4,w5};
endmodule



module LFSR_tb;

  reg [3:0] seed;
  reg rst;
  reg clk;
  reg sel;
  wire [3:0] state;

  // Instantiate the LFSR module
  LFSR uut (
    .seed(seed),
    .rst(rst),
    .clk(clk),
    .sel(sel),
    .state(state)
  );

  // Clock generation
  initial begin
    clk = 0;
    forever #5 clk = ~clk; // Toggle clock every 5 ns
  end


  // Stimulus
  initial begin
    // Initialize signals
    rst = 1;
    sel = 0;
    seed = 4'b1111;

    // Apply reset
    #10 rst = 0; // De-assert reset after 10 ns

    // Set select to 0 and observe the initial seed loading
    #10 sel = 0;
    #10; // Wait for a clock cycle

    // Set select to 1 and observe LFSR operation
    sel = 1;
    #150; // Run the LFSR for a few clock cycles

    // Finish simulation
    $finish;
  end

  // Monitor the output state
  initial begin
    $display("Time\tReset\tSelect\tState");
    $monitor("%0d\t%b\t%b\t%b", $time, rst, sel, state);
  end

endmodule
