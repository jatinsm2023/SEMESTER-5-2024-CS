`timescale 1ns / 1ps

module srl8(
    input [7:0]a,
    input [7:0]b,
    output [7:0] out
    );
    wire [7:0] temp;
    wire w1, w2;

    mux8 m0(a[7:0], b[2:0], temp[0]);
    mux8 m1({1'b0, a[7:1]}, b[2:0], temp[1]);
    mux8 m2({2'b00, a[7:2]}, b[2:0], temp[2]);
    mux8 m3({3'b000, a[7:3]}, b[2:0], temp[3]);
    mux8 m4({4'b0000, a[7:4]}, b[2:0], temp[4]);
    mux8 m5({5'b00000, a[7:5]}, b[2:0], temp[5]);
    mux8 m6({6'b000000, a[7:6]}, b[2:0], temp[6]);
    mux8 m7({7'b0000000, a[7]}, b[2:0], temp[7]);

    or g1(w1, b[3], b[4], b[5], b[6], b[7]);
    not g2(w2, w1);

    mux2 mu1({temp[0], 1'b0}, w2, out[0]);
    mux2 mu2({temp[1], 1'b0}, w2, out[1]);
    mux2 mu3({temp[2], 1'b0}, w2, out[2]);
    mux2 mu4({temp[3], 1'b0}, w2, out[3]);
    mux2 mu5({temp[4], 1'b0}, w2, out[4]);
    mux2 mu6({temp[5], 1'b0}, w2, out[5]);
    mux2 mu7({temp[6], 1'b0}, w2, out[6]);
    mux2 mu8({temp[7], 1'b0}, w2, out[7]);

endmodule
