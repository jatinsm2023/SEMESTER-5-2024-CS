`timescale 1ns / 1ps

module dec4(
    input [7:0] a,
    input [7:0] b,
    output [7:0] out
    );
    sub8 SUB8(a,b,out);
endmodule
