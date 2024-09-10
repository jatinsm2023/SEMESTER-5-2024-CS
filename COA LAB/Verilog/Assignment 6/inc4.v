`timescale 1ns / 1ps

module inc4(
    input [31:0] a,
    input [31:0] b,
    output [31:0] out
    );

    add32 a1(a,b,out);

endmodule
