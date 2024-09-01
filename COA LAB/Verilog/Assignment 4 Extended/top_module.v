

module top_module(
    input  clk,
    input [5:0] d_in,
    input [2:0] err_pos,
    output  [15:0] out
    );
    
    wire [6:0] t0, t1, t2, t3, u0, u1, u2, u3;
    wire [3:0] out0, out1, out2, out3;

    
    secure_router rtr(d_in, t0, t1, t2, t3, clk);

    error_inject e0(t0, err_pos, u0, clk);
    error_inject e1(t1, err_pos, u1, clk);
    error_inject e2(t2, err_pos, u2, clk);
    error_inject e3(t3, err_pos, u3, clk);
    
    error_correct cur0(u0, out[3:0], clk);
    error_correct cur1(u1, out[7:4], clk);
    error_correct cur2(u2, out[11:8], clk);
    error_correct cur3(u3, out[15:12], clk);

endmodule
