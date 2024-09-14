`timescale 1ns / 1ps

module and8(
    input [7:0] a,
    input [7:0] b,
    output [7:0] out
    );
    and and0(out[0],a[0],b[0]);
    and and1(out[1],a[1],b[1]);
    and and2(out[2],a[2],b[2]);
    and and3(out[3],a[3],b[3]);
    and and4(out[4],a[4],b[4]);
    and and5(out[5],a[5],b[5]);
    and and6(out[6],a[6],b[6]);
    and and7(out[7],a[7],b[7]);
endmodule
