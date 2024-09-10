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


module xor32(
    input [31:0] a,
    input [31:0] b,
    output [31:0] out
    );

    xor8 xor0(a[7:0],b[7:0],out[7:0]);
    xor8 xor1(a[15:8],b[15:8],out[15:8]);
    xor8 xor2(a[23:16],b[23:16],out[23:16]);
    xor8 xor3(a[31:24],b[31:24],out[31:24]);
    
endmodule