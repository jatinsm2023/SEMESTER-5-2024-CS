module tb_full_adder_nbit;

    parameter N = 32;
    reg [N-1:0] A, B;
    reg Cin;
    wire [N-1:0] Sum;
    wire Cout;

    full_adder_nbit #(N) uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

    integer i, j, k;

    initial begin
        $display("A       B       Cin | Sum     Cout");

        for (i = 0; i < 2**N; i = i + 1) begin
            for (j = 0; j < 2**N; j = j + 1) begin
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
