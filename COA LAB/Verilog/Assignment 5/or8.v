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
