`timescale 1ns / 1ps

module add1(
    input a,
    input b,  
    input cin,
    output sum,
    output cout 
    );
    wire w1,w2,w3,w4;
    and A1(w1,a,b);
    and A2(w2,a,cin);
    and A3(w3,b,cin);
    or X1(cout,w1,w2,w3);
    xor X2(sum,a,b,cin);
    
endmodule
    
module add8(
    input [7:0] a,
    input [7:0] b,
    input cin,
    output [7:0] out
    output cout
    );
    wire [8:0] carry;
    assign carry[0] = 0;
    add1 A1(a[0],b[0],carry[0],out[0],carry[1]);
    add1 A2(a[1],b[1],carry[1],out[1],carry[2]);
    add1 A3(a[2],b[2],carry[2],out[2],carry[3]);
    add1 A4(a[3],b[3],carry[3],out[3],carry[4]);
    add1 A5(a[4],b[4],carry[4],out[4],carry[5]);
    add1 A6(a[5],b[5],carry[5],out[5],carry[6]);
    add1 A7(a[6],b[6],carry[6],out[6],carry[7]);
    add1 A8(a[7],b[7],carry[7],out[7],carry[8]);
    
    assign cout = carry[8];

endmodule

module add32(
    input [31:0] a,
    input [31:0] b,
    output [31:0] out
);
    wire [4:0] carry;
    assign carry[0] = 0;
    add8 A1(a[7:0],b[7:0],carry[0],out[7:0],carry[1]);
    add8 A2(a[15:8],b[15:8],carry[1],out[15:8],carry[2]);
    add8 A3(a[23:16],b[23:16],carry[2],out[23:16],carry[3]);
    add8 A4(a[31:24],b[31:24],carry[3],out[31:24],carry[4]);
    
    assign cout = carry[4];
    
endmodule