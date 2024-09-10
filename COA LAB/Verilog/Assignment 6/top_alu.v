`timescale 1ns / 1ps

module top_alu(
    input [7:0]a,
    input [7:0]b,
    input [3:0] op,
    output [7:0] out
);

    wire [7:0] add_res, sub_res, mul_res, div_res, and_res, or_res, xor_res, not_res, a_res, b_res, sl_res, srl_res, sra_res, inc4_res, dec4_res, ham_res;

    add8 ad(a, b, add_res);
    sub8 su(a, b, sub_res);
    mul8 mu(a, b, mul_res);
    div8 di(a, b, div_res);
    and8 an(a, b, and_res);
    or8 orr(a, b, or_res);
    xor8 xo(a, b, xor_res);
    not8 no(a, not_res);
    a8 eqa(a, a_res);
    b8 eqb(b, b_res);
    sl8 sl(a, b, sl_res);
    srl8 srl(a, b, srl_res);
    sra8 sra(a, b, sra_res);
    inc4 add4(a, 8'b00000100, inc4_res);
    dec4 sub4(a, 8'b00000100, dec4_res);
    ham8 ham(a, ham_res);
    
    mux16 mu1({ham_res[0],dec4_res[0],inc4_res[0],sra_res[0],srl_res[0],sl_res[0],b_res[0],a_res[0],not_res[0],xor_res[0],or_res[0],and_res[0],div_res[0],mul_res[0],sub_res[0],add_res[0]}, op, out[0]);
    mux16 mu2({ham_res[1],dec4_res[1],inc4_res[1],sra_res[1],srl_res[1],sl_res[1],b_res[1],a_res[1],not_res[1],xor_res[1],or_res[1],and_res[1],div_res[1],mul_res[1],sub_res[1],add_res[1]}, op, out[1]);
    mux16 mu3({ham_res[2],dec4_res[2],inc4_res[2],sra_res[2],srl_res[2],sl_res[2],b_res[2],a_res[2],not_res[2],xor_res[2],or_res[2],and_res[2],div_res[2],mul_res[2],sub_res[2],add_res[2]}, op, out[2]);
    mux16 mu4({ham_res[3],dec4_res[3],inc4_res[3],sra_res[3],srl_res[3],sl_res[3],b_res[3],a_res[3],not_res[3],xor_res[3],or_res[3],and_res[3],div_res[3],mul_res[3],sub_res[3],add_res[3]}, op, out[3]);
    mux16 mu5({ham_res[4],dec4_res[4],inc4_res[4],sra_res[4],srl_res[4],sl_res[4],b_res[4],a_res[4],not_res[4],xor_res[4],or_res[4],and_res[4],div_res[4],mul_res[4],sub_res[4],add_res[4]}, op, out[4]);
    mux16 mu6({ham_res[5],dec4_res[5],inc4_res[5],sra_res[5],srl_res[5],sl_res[5],b_res[5],a_res[5],not_res[5],xor_res[5],or_res[5],and_res[5],div_res[5],mul_res[5],sub_res[5],add_res[5]}, op, out[5]);
    mux16 mu7({ham_res[6],dec4_res[6],inc4_res[6],sra_res[6],srl_res[6],sl_res[6],b_res[6],a_res[6],not_res[6],xor_res[6],or_res[6],and_res[6],div_res[6],mul_res[6],sub_res[6],add_res[6]}, op, out[6]);
    mux16 mu8({ham_res[7],dec4_res[7],inc4_res[7],sra_res[7],srl_res[7],sl_res[7],b_res[7],a_res[7],not_res[7],xor_res[7],or_res[7],and_res[7],div_res[7],mul_res[7],sub_res[7],add_res[7]}, op, out[7]);

    
endmodule
