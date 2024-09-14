`timescale 1ns / 1ps

module inc4(
    input [7:0] a,
    input [7:0] b,
    output [7:0] out
    );
    add8 ADD8(a,b,out);
endmodule
