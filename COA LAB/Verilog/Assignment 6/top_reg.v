`timescale 1ns / 1ps

module top_reg( 
    input clk,
    input [2:0] op
    );
    wire [2:0] source1, source2, dest;
    wire [31:0] a,b,z;
    wire [3:0] oper;
    
    assign source1[2] = 0;
    wire t1, t2;
    xnor(t1, op[2], op[1]);
    not(t2, op[0]);
    and(source1[1], t1, t2);
    wire t3, t4, t5, t6, t7;
    not(t3, op[2]);
    not(t4, op[1]);
    and(t5, op[2], t4);
    and(t6, t3, op[1]);
    and(t7, t4, op[0]);
    or(source1[0], t5, t6, t7);
    
    and(source2[2], t3, t4, op[0]);
    wire u1, u2, u3;
    and(u1, t4, t2);
    and(u2, op[2], t4);
    and(u3, t3, op[1]);
    or(source2[1], u1, u2, u3);
    and(source2[0], t3, t4);
    
    wire v1, v2, v3;
    and(v1, op[2], t4, t2);
    and(v2, t3, op[0]);
    and(v3, op[1], op[0]);
    or(dest[2], v1, v2, v3);
    wire v4;
    and(v4, op[2], t2);
    or(dest[1], op[1], v4);
    xnor(dest[0], op[2], op[1], op[0]);
    
    and(oper[3], t3, op[1]);
    and(oper[2], op[2], t4, op[0]);
    wire w1, w2;
    and(w1, t3, op[1]);
    and(w2, op[2], t4, t2);
    or(oper[1], w1, w2);
    and(oper[0], t3, op[0]);
    
    register_bank  rgb(clk,source1,source2,dest,z,a,b);
    top_alu  alt(a, b, oper, z);
     
endmodule
