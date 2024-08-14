module tb_CLA16bit;

    reg [15:0] A; 
    reg [15:0] B; 
    reg Cin;     
    wire [15:0] Sum; 
    wire Cout;     

    CLA16bit uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

   integer i, j, k;

    initial begin
        $display("A       B       Cin | Sum     Cout");

      for (i = 0; i < 2**16; i = i + 1) begin
        for (j = 0; j < 2**16; j = j + 1) begin
                for (k = 0; k < 2; k = k + 1) begin
                    A = i;
                    B = j;
                    Cin = k;
                    #10;
                    $display("%b %b %b  |  %b    %b", A, B, Cin, Sum, Cout);
                end
            end
        end

        $stop;
    end

endmodule
