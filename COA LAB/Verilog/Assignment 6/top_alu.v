`timescale 1ns / 1ps

module top_alu(
    input [31:0]a,
    input [31:0]b,
    input [3:0] op,
    output [31:0] out
);

    wire [31:0] add_res, sub_res, mul_res, div_res, and_res, or_res, xor_res, not_res, a_res, b_res, sl_res, srl_res, sra_res, inc4_res, dec4_res, ham_res;

    add32 ad(a, b, add_res);
    sub32 su(a, b, sub_res);
    mul32 mu(a, b, mul_res);
    div32 di(a, b, div_res);
    and32 an(a, b, and_res);
    or32 orr(a, b, or_res);
    xor32 xo(a, b, xor_res);
    not32 no(a, not_res);
    a32 eqa(a, a_res);
    b32 eqb(b, b_res);
    sl32 sl(a, b, sl_res);
    srl32 srl(a, b, srl_res);
    sra32 sra(a, b, sra_res);
    inc4 add4(a, 32'b00000100, inc4_res);
    dec4 sub4(a, 32'b00000100, dec4_res);
    ham32 ham(a, ham_res);
    
    mux16 mu1({ham_res[0],dec4_res[0],inc4_res[0],sra_res[0],srl_res[0],sl_res[0],b_res[0],a_res[0],not_res[0],xor_res[0],or_res[0],and_res[0],div_res[0],mul_res[0],sub_res[0],add_res[0]}, op, out[0]);
    mux16 mu2({ham_res[1],dec4_res[1],inc4_res[1],sra_res[1],srl_res[1],sl_res[1],b_res[1],a_res[1],not_res[1],xor_res[1],or_res[1],and_res[1],div_res[1],mul_res[1],sub_res[1],add_res[1]}, op, out[1]);
    mux16 mu3({ham_res[2],dec4_res[2],inc4_res[2],sra_res[2],srl_res[2],sl_res[2],b_res[2],a_res[2],not_res[2],xor_res[2],or_res[2],and_res[2],div_res[2],mul_res[2],sub_res[2],add_res[2]}, op, out[2]);
    mux16 mu4({ham_res[3],dec4_res[3],inc4_res[3],sra_res[3],srl_res[3],sl_res[3],b_res[3],a_res[3],not_res[3],xor_res[3],or_res[3],and_res[3],div_res[3],mul_res[3],sub_res[3],add_res[3]}, op, out[3]);
    mux16 mu5({ham_res[4],dec4_res[4],inc4_res[4],sra_res[4],srl_res[4],sl_res[4],b_res[4],a_res[4],not_res[4],xor_res[4],or_res[4],and_res[4],div_res[4],mul_res[4],sub_res[4],add_res[4]}, op, out[4]);
    mux16 mu6({ham_res[5],dec4_res[5],inc4_res[5],sra_res[5],srl_res[5],sl_res[5],b_res[5],a_res[5],not_res[5],xor_res[5],or_res[5],and_res[5],div_res[5],mul_res[5],sub_res[5],add_res[5]}, op, out[5]);
    mux16 mu7({ham_res[6],dec4_res[6],inc4_res[6],sra_res[6],srl_res[6],sl_res[6],b_res[6],a_res[6],not_res[6],xor_res[6],or_res[6],and_res[6],div_res[6],mul_res[6],sub_res[6],add_res[6]}, op, out[6]);
    mux16 mu8({ham_res[7],dec4_res[7],inc4_res[7],sra_res[7],srl_res[7],sl_res[7],b_res[7],a_res[7],not_res[7],xor_res[7],or_res[7],and_res[7],div_res[7],mul_res[7],sub_res[7],add_res[7]}, op, out[7]);
    mux16 mu9({ham_res[8],dec4_res[8],inc4_res[8],sra_res[8],srl_res[8],sl_res[8],b_res[8],a_res[8],not_res[8],xor_res[8],or_res[8],and_res[8],div_res[8],mul_res[8],sub_res[8],add_res[8]}, op, out[8]);
    mux16 mu10({ham_res[9],dec4_res[9],inc4_res[9],sra_res[9],srl_res[9],sl_res[9],b_res[9],a_res[9],not_res[9],xor_res[9],or_res[9],and_res[9],div_res[9],mul_res[9],sub_res[9],add_res[9]}, op, out[9]);
    mux16 mu11({ham_res[10],dec4_res[10],inc4_res[10],sra_res[10],srl_res[10],sl_res[10],b_res[10],a_res[10],not_res[10],xor_res[10],or_res[10],and_res[10],div_res[10],mul_res[10],sub_res[10],add_res[10]}, op, out[10]);
    mux16 mu12({ham_res[11],dec4_res[11],inc4_res[11],sra_res[11],srl_res[11],sl_res[11],b_res[11],a_res[11],not_res[11],xor_res[11],or_res[11],and_res[11],div_res[11],mul_res[11],sub_res[11],add_res[11]}, op, out[11]);
    mux16 mu13({ham_res[12],dec4_res[12],inc4_res[12],sra_res[12],srl_res[12],sl_res[12],b_res[12],a_res[12],not_res[12],xor_res[12],or_res[12],and_res[12],div_res[12],mul_res[12],sub_res[12],add_res[12]}, op, out[12]);
    mux16 mu14({ham_res[13],dec4_res[13],inc4_res[13],sra_res[13],srl_res[13],sl_res[13],b_res[13],a_res[13],not_res[13],xor_res[13],or_res[13],and_res[13],div_res[13],mul_res[13],sub_res[13],add_res[13]}, op, out[13]);
    mux16 mu15({ham_res[14],dec4_res[14],inc4_res[14],sra_res[14],srl_res[14],sl_res[14],b_res[14],a_res[14],not_res[14],xor_res[14],or_res[14],and_res[14],div_res[14],mul_res[14],sub_res[14],add_res[14]}, op, out[14]);
    mux16 mu16({ham_res[15],dec4_res[15],inc4_res[15],sra_res[15],srl_res[15],sl_res[15],b_res[15],a_res[15],not_res[15],xor_res[15],or_res[15],and_res[15],div_res[15],mul_res[15],sub_res[15],add_res[15]}, op, out[15]);
    mux16 mu17({ham_res[16],dec4_res[16],inc4_res[16],sra_res[16],srl_res[16],sl_res[16],b_res[16],a_res[16],not_res[16],xor_res[16],or_res[16],and_res[16],div_res[16],mul_res[16],sub_res[16],add_res[16]}, op, out[16]);
    mux16 mu18({ham_res[17],dec4_res[17],inc4_res[17],sra_res[17],srl_res[17],sl_res[17],b_res[17],a_res[17],not_res[17],xor_res[17],or_res[17],and_res[17],div_res[17],mul_res[17],sub_res[17],add_res[17]}, op, out[17]);
    mux16 mu19({ham_res[18],dec4_res[18],inc4_res[18],sra_res[18],srl_res[18],sl_res[18],b_res[18],a_res[18],not_res[18],xor_res[18],or_res[18],and_res[18],div_res[18],mul_res[18],sub_res[18],add_res[18]}, op, out[18]);
    mux16 mu20({ham_res[19],dec4_res[19],inc4_res[19],sra_res[19],srl_res[19],sl_res[19],b_res[19],a_res[19],not_res[19],xor_res[19],or_res[19],and_res[19],div_res[19],mul_res[19],sub_res[19],add_res[19]}, op, out[19]);
    mux16 mu21({ham_res[20],dec4_res[20],inc4_res[20],sra_res[20],srl_res[20],sl_res[20],b_res[20],a_res[20],not_res[20],xor_res[20],or_res[20],and_res[20],div_res[20],mul_res[20],sub_res[20],add_res[20]}, op, out[20]);
    mux16 mu22({ham_res[21],dec4_res[21],inc4_res[21],sra_res[21],srl_res[21],sl_res[21],b_res[21],a_res[21],not_res[21],xor_res[21],or_res[21],and_res[21],div_res[21],mul_res[21],sub_res[21],add_res[21]}, op, out[21]);
    mux16 mu23({ham_res[22],dec4_res[22],inc4_res[22],sra_res[22],srl_res[22],sl_res[22],b_res[22],a_res[22],not_res[22],xor_res[22],or_res[22],and_res[22],div_res[22],mul_res[22],sub_res[22],add_res[22]}, op, out[22]);
    mux16 mu24({ham_res[23],dec4_res[23],inc4_res[23],sra_res[23],srl_res[23],sl_res[23],b_res[23],a_res[23],not_res[23],xor_res[23],or_res[23],and_res[23],div_res[23],mul_res[23],sub_res[23],add_res[23]}, op, out[23]);
    mux16 mu25({ham_res[24],dec4_res[24],inc4_res[24],sra_res[24],srl_res[24],sl_res[24],b_res[24],a_res[24],not_res[24],xor_res[24],or_res[24],and_res[24],div_res[24],mul_res[24],sub_res[24],add_res[24]}, op, out[24]);
    mux16 mu26({ham_res[25],dec4_res[25],inc4_res[25],sra_res[25],srl_res[25],sl_res[25],b_res[25],a_res[25],not_res[25],xor_res[25],or_res[25],and_res[25],div_res[25],mul_res[25],sub_res[25],add_res[25]}, op, out[25]);
    mux16 mu27({ham_res[26],dec4_res[26],inc4_res[26],sra_res[26],srl_res[26],sl_res[26],b_res[26],a_res[26],not_res[26],xor_res[26],or_res[26],and_res[26],div_res[26],mul_res[26],sub_res[26],add_res[26]}, op, out[26]);
    mux16 mu28({ham_res[27],dec4_res[27],inc4_res[27],sra_res[27],srl_res[27],sl_res[27],b_res[27],a_res[27],not_res[27],xor_res[27],or_res[27],and_res[27],div_res[27],mul_res[27],sub_res[27],add_res[27]}, op, out[27]);
    mux16 mu29({ham_res[28],dec4_res[28],inc4_res[28],sra_res[28],srl_res[28],sl_res[28],b_res[28],a_res[28],not_res[28],xor_res[28],or_res[28],and_res[28],div_res[28],mul_res[28],sub_res[28],add_res[28]}, op, out[28]);
    mux16 mu30({ham_res[29],dec4_res[29],inc4_res[29],sra_res[29],srl_res[29],sl_res[29],b_res[29],a_res[29],not_res[29],xor_res[29],or_res[29],and_res[29],div_res[29],mul_res[29],sub_res[29],add_res[29]}, op, out[29]);
    mux16 mu31({ham_res[30],dec4_res[30],inc4_res[30],sra_res[30],srl_res[30],sl_res[30],b_res[30],a_res[30],not_res[30],xor_res[30],or_res[30],and_res[30],div_res[30],mul_res[30],sub_res[30],add_res[30]}, op, out[30]);
    mux16 mu32({ham_res[31],dec4_res[31],inc4_res[31],sra_res[31],srl_res[31],sl_res[31],b_res[31],a_res[31],not_res[31],xor_res[31],or_res[31],and_res[31],div_res[31],mul_res[31],sub_res[31],add_res[31]}, op, out[31]);
    
endmodule
