`timescale 1ns / 1ps

module xor8(
    input [7:0] a,
    input [7:0] b,
    output [7:0] out
    );
    xor xor0(out[0],a[0],b[0]);
    xor xor1(out[1],a[1],b[1]);
    xor xor2(out[2],a[2],b[2]);
    xor xor3(out[3],a[3],b[3]);
    xor xor4(out[4],a[4],b[4]);
    xor xor5(out[5],a[5],b[5]);
    xor xor6(out[6],a[6],b[6]);
    xor xor7(out[7],a[7],b[7]);
endmodule
