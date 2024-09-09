`timescale 1ns / 1ps

module inc4(
    input [7:0] a,
    output [7:0] out
    );
    wire [7:0] b,
    b = 8'b00000100;
    add8 ADD8(a,b,out);
endmodule
