module tb_half_adder_nbit_behavioral;

    parameter N = 3;
    reg [N-1:0] A, B;
    wire [N-1:0] Sum, Carry;

    half_adder_nbit_behavioral #(N) uut (
        .A(A),
        .B(B),
        .Sum(Sum),
        .Carry(Carry)
    );

    integer i, j;

    initial begin
        $display("A       B       | Sum     Carry");

        for (i = 0; i < 2**N; i = i + 1) begin
            for (j = 0; j < 2**N; j = j + 1) begin
                A = i;
                B = j;
                #10;
                $display("%b %b |  %b    %b", A, B, Sum, Carry);
            end
        end

        $stop;
    end

endmodule
