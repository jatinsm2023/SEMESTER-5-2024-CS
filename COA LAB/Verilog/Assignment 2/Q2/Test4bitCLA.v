module tb_CLA4bit;

    reg [3:0] A; 
    reg [3:0] B; 
    reg Cin;     
    wire [3:0] Sum; 
    wire Cout;     

    CLA4bit uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

   integer i, j, k;

    initial begin
        $display("A       B       Cin | Sum     Cout");

      for (i = 0; i < 2**4; i = i + 1) begin
        for (j = 0; j < 2**4; j = j + 1) begin
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
