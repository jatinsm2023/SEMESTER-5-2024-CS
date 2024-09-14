`timescale 1ns / 1ps

module b8(
    input [7:0] b,
    output [7:0] out
    );
    assign out[0] = b[0];
    assign out[1] = b[1];
    assign out[2] = b[2];
    assign out[3] = b[3];
    assign out[4] = b[4];
    assign out[5] = b[5];
    assign out[6] = b[6];
    assign out[7] = b[7];
endmodule

