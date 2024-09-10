`timescale 1ns / 1ps

module dec4(
    input [31:0] a,
    input [31:0] b,
    output [31:0] out
    );
    sub32 s1(a,b,out);
endmodule
