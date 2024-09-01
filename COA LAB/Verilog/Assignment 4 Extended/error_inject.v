
module error_inject(
    input [6:0] d_orig,
    input [2:0] pos,
    output reg [6:0] d_error,
    input clk
    );
  
    always @(posedge clk)begin
        d_error = d_orig;
        d_error[pos] = ~d_orig[pos]; 
    end
endmodule
