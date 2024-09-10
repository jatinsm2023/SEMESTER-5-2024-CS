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




module srl32(
    input [31:0] a,  
    input [31:0] b,  
    output [31:0] out 
    );
    wire [31:0] temp;
    wire w1, w2;

    mux32 m0 (a[31:0], b[4:0], temp[0]);
    mux32 m1 ({1'b0, a[31:1]}, b[4:0], temp[1]);
    mux32 m2 ({2'b00, a[31:2]}, b[4:0], temp[2]);
    mux32 m3 ({3'b000, a[31:3]}, b[4:0], temp[3]);
    mux32 m4 ({4'b0000, a[31:4]}, b[4:0], temp[4]);
    mux32 m5 ({5'b00000, a[31:5]}, b[4:0], temp[5]);
    mux32 m6 ({6'b000000, a[31:6]}, b[4:0], temp[6]);
    mux32 m7 ({7'b0000000, a[31:7]}, b[4:0], temp[7]);
    mux32 m8 ({8'b00000000, a[31:8]}, b[4:0], temp[8]);
    mux32 m9 ({9'b000000000, a[31:9]}, b[4:0], temp[9]);
    mux32 m10({10'b0000000000, a[31:10]}, b[4:0], temp[10]);
    mux32 m11({11'b00000000000, a[31:11]}, b[4:0], temp[11]);
    mux32 m12({12'b000000000000, a[31:12]}, b[4:0], temp[12]);
    mux32 m13({13'b0000000000000, a[31:13]}, b[4:0], temp[13]);
    mux32 m14({14'b00000000000000, a[31:14]}, b[4:0], temp[14]);
    mux32 m15({15'b000000000000000, a[31:15]}, b[4:0], temp[15]);
    mux32 m16({16'b0000000000000000, a[31:16]}, b[4:0], temp[16]);
    mux32 m17({17'b00000000000000000, a[31:17]}, b[4:0], temp[17]);
    mux32 m18({18'b000000000000000000, a[31:18]}, b[4:0], temp[18]);
    mux32 m19({19'b0000000000000000000, a[31:19]}, b[4:0], temp[19]);
    mux32 m20({20'b00000000000000000000, a[31:20]}, b[4:0], temp[20]);
    mux32 m21({21'b000000000000000000000, a[31:21]}, b[4:0], temp[21]);
    mux32 m22({22'b0000000000000000000000, a[31:22]}, b[4:0], temp[22]);
    mux32 m23({23'b00000000000000000000000, a[31:23]}, b[4:0], temp[23]);
    mux32 m24({24'b000000000000000000000000, a[31:24]}, b[4:0], temp[24]);
    mux32 m25({25'b0000000000000000000000000, a[31:25]}, b[4:0], temp[25]);
    mux32 m26({26'b00000000000000000000000000, a[31:26]}, b[4:0], temp[26]);
    mux32 m27({27'b000000000000000000000000000, a[31:27]}, b[4:0], temp[27]);
    mux32 m28({28'b0000000000000000000000000000, a[31:28]}, b[4:0], temp[28]);
    mux32 m29({29'b00000000000000000000000000000, a[31:29]}, b[4:0], temp[29]);
    mux32 m30({30'b000000000000000000000000000000, a[31:30]}, b[4:0], temp[30]);
    mux32 m31({31'b0000000000000000000000000000000, a[31]}, b[4:0], temp[31]);

    // OR gates for checking if higher bits in b[31:3] are 0
    or g1(w1, b[3], b[4], b[5], b[6], b[7], b[8], b[9], b[10], b[11], b[12], b[13], b[14], b[15], b[16], b[17], b[18], b[19], b[20], b[21], b[22], b[23], b[24], b[25], b[26], b[27], b[28], b[29], b[30], b[31]);
    not g2(w2, w1);

    // Output based on whether the shift amount b is less than 8
    mux2 mu1 ({temp[0], 1'b0}, w2, out[0]);
    mux2 mu2 ({temp[1], 1'b0}, w2, out[1]);
    mux2 mu3 ({temp[2], 1'b0}, w2, out[2]);
    mux2 mu4 ({temp[3], 1'b0}, w2, out[3]);
    mux2 mu5 ({temp[4], 1'b0}, w2, out[4]);
    mux2 mu6 ({temp[5], 1'b0}, w2, out[5]);
    mux2 mu7 ({temp[6], 1'b0}, w2, out[6]);
    mux2 mu8 ({temp[7], 1'b0}, w2, out[7]);
    mux2 mu9 ({temp[8], 1'b0}, w2, out[8]);
    mux2 mu10({temp[9], 1'b0}, w2, out[9]);
    mux2 mu11({temp[10], 1'b0}, w2, out[10]);
    mux2 mu12({temp[11], 1'b0}, w2, out[11]);
    mux2 mu13({temp[12], 1'b0}, w2, out[12]);
    mux2 mu14({temp[13], 1'b0}, w2, out[13]);
    mux2 mu15({temp[14], 1'b0}, w2, out[14]);
    mux2 mu16({temp[15], 1'b0}, w2, out[15]);
    mux2 mu17({temp[16], 1'b0}, w2, out[16]);
    mux2 mu18({temp[17], 1'b0}, w2, out[17]);
    mux2 mu19({temp[18], 1'b0}, w2, out[18]);
    mux2 mu20({temp[19], 1'b0}, w2, out[19]);
    mux2 mu21({temp[20], 1'b0}, w2, out[20]);
    mux2 mu22({temp[21], 1'b0}, w2, out[21]);
    mux2 mu23({temp[22], 1'b0}, w2, out[22]);
    mux2 mu24({temp[23], 1'b0}, w2, out[23]);
    mux2 mu25({temp[24], 1'b0}, w2, out[24]);
    mux2 mu26({temp[25], 1'b0}, w2, out[25]);
    mux2 mu27({temp[26], 1'b0}, w2, out[26]);
    mux2 mu28({temp[27], 1'b0}, w2, out[27]);
    mux2 mu29({temp[28], 1'b0}, w2, out[28]);
    mux2 mu30({temp[29], 1'b0}, w2, out[29]);
    mux2 mu31({temp[30], 1'b0}, w2, out[30]);
    mux2 mu32({temp[31], 1'b0}, w2, out[31]);

endmodule


