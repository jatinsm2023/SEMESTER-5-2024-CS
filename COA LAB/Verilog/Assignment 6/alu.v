module alu(
    input [7:0]a,
    input [7:0]b,
    input [3:0]oper,
    output [7:0] out
);
wire [7:0] add_res,sub_res,mult_res,div_res,and_res,or_res,xor_res,not_res,eqa_res,eqb_res,leftshift_res,rightshiftlog_res,rightshiftarith_res,add4_res,sub4_res,hamm_res;
adder addition(a,b,add_res);
sub  substraction(a,b,sub_res);
mult multiplication(a,b,mult_res);
div division(a,b,div_res);
andg bitwise_and(a,b,and_res);
org bitwise_or(a,b,or_res);
xorg bitwise_xor(a,b,xor_res);
notg bitwise_not(a,not_res);
outeqinp equal_a(a,eqa_res);
outeqinp equal_b(b,eqb_res);
leftshiftlog left_shift(a,b,leftshift_res);
rightshiftlog right_shiftlog(a,b,rightshiftlog_res);
rightshiftarith right_shiftarith(a,b,rightshiftarith_res);
adder add4(a,8'd4,add4_res);
sub sub4(a,8'd4,sub4_res);
hamm_wt hamm(a,hamm_res);
mux16 m1({add_res[0],sub_res[0],mult_res[0],div_res[0],and_res[0],or_res[0],xor_res[0],not_res[0],eqa_res[0],eqb_res[0],leftshift_res[0],rightshiftlog_res[0],rightshiftarith_res[0],add4_res[0],sub4_res[0],hamm_res[0]},oper,out[0]);
mux16 m2({add_res[1],sub_res[1],mult_res[1],div_res[1],and_res[1],or_res[1],xor_res[1],not_res[1],eqa_res[1],eqb_res[1],leftshift_res[1],rightshiftlog_res[1],rightshiftarith_res[1],add4_res[1],sub4_res[1],hamm_res[1]},oper,out[1]);
mux16 m3({add_res[2],sub_res[2],mult_res[2],div_res[2],and_res[2],or_res[2],xor_res[2],not_res[2],eqa_res[2],eqb_res[2],leftshift_res[2],rightshiftlog_res[2],rightshiftarith_res[2],add4_res[2],sub4_res[2],hamm_res[2]},oper,out[2]);
mux16 m4({add_res[3],sub_res[3],mult_res[3],div_res[3],and_res[3],or_res[3],xor_res[3],not_res[3],eqa_res[3],eqb_res[3],leftshift_res[3],rightshiftlog_res[3],rightshiftarith_res[3],add4_res[3],sub4_res[3],hamm_res[3]},oper,out[3]);
mux16 m5({add_res[4],sub_res[4],mult_res[4],div_res[4],and_res[4],or_res[4],xor_res[4],not_res[4],eqa_res[4],eqb_res[4],leftshift_res[4],rightshiftlog_res[4],rightshiftarith_res[4],add4_res[4],sub4_res[4],hamm_res[4]},oper,out[4]);
mux16 m6({add_res[5],sub_res[5],mult_res[5],div_res[5],and_res[5],or_res[5],xor_res[5],not_res[5],eqa_res[5],eqb_res[5],leftshift_res[5],rightshiftlog_res[5],rightshiftarith_res[5],add4_res[5],sub4_res[5],hamm_res[5]},oper,out[5]);
mux16 m7({add_res[6],sub_res[6],mult_res[6],div_res[6],and_res[6],or_res[6],xor_res[6],not_res[6],eqa_res[6],eqb_res[6],leftshift_res[6],rightshiftlog_res[6],rightshiftarith_res[6],add4_res[6],sub4_res[6],hamm_res[6]},oper,out[6]);
mux16 m8({add_res[7],sub_res[7],mult_res[7],div_res[7],and_res[7],or_res[7],xor_res[7],not_res[7],eqa_res[7],eqb_res[7],leftshift_res[7],rightshiftlog_res[7],rightshiftarith_res[7],add4_res[7],sub4_res[7],hamm_res[7]},oper,out[7]);
endmodule