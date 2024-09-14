`timescale 1ns / 1ps

module ham8 (
    input [7:0]a,
    output [7:0]out
    );
    wire [1:0] w1, w2;
    wire [2:0] w3;
    wire [3:0] w4;
    
    adder1 a1(a[7],a[6],a[5],w1);
    adder1 a2(a[4],a[3],a[2],w2);
    adder2 a3(w1,w2,a[1],w3);
    adder3 a4(w3,3'd0,a[0],w4);
    add8 a5({4'b0000,w4},8'd0,out);

endmodule
