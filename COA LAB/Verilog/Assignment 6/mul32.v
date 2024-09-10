`timescale 1ns / 1ps

module mul8(
    input [7:0] a,
    input [7:0] b,
    output  [7:0] out
    );
    assign out = a*b;
endmodule

module mul32(
    input [31:0] a,
    input [31:0] b,
    output  [31:0] out
    );
    assign out = a*b;
endmodule