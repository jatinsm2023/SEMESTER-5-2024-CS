`timescale 1ns / 1ps

module or8(
    input [7:0] a,
    input [7:0] b,
    output [7:0] out
    );
    or OR0(out[0],a[0],b[0]);
    or OR1(out[1],a[1],b[1]);
    or OR2(out[2],a[2],b[2]);
    or OR3(out[3],a[3],b[3]);
    or OR4(out[4],a[4],b[4]);
    or OR5(out[5],a[5],b[5]);
    or OR6(out[6],a[6],b[6]);
    or OR7(out[7],a[7],b[7]);
endmodule

module or32(
    input [31:0] a,
    input [31:0] b,
    output [31:0] out
    );
    or8 or0(a[7:0],b[7:0],out[7:0]);
    or8 or1(a[15:8],b[15:8],out[15:8]);
    or8 or2(a[23:16],b[23:16],out[23:16]);
    or8 or3(a[31:24],b[31:24],out[31:24]);
endmodule
