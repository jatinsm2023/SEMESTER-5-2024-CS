module tb_full_adder_nbit_behavioral;

    parameter N = 4;  // Parameter to define the bit-width of the full adder
    reg [N-1:0] A, B; // N-bit inputs A and B
    reg Cin;          // 1-bit input carry-in
    wire [N-1:0] Sum; // N-bit output sum
    wire Cout;        // 1-bit output carry-out

    // Instantiate the n-bit full adder (Behavioral)
    full_adder_nbit_behavioral #(N) uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

    integer i, j, k; // Loop variables for generating test cases

    initial begin
        // Display header
        $display("A       B       Cin | Sum     Cout");

        // Generate all possible combinations of inputs A, B, and Cin
        for (i = 0; i < 2**N; i = i + 1) begin
            for (j = 0; j < 2**N; j = j + 1) begin
                for (k = 0; k < 2; k = k + 1) begin
                    A = i;
                    B = j;
                    Cin = k;
                    #10; // Wait for a short time to observe the outputs
                    $display("%b %b %b  |  %b    %b", A, B, Cin, Sum, Cout);
                end
            end
        end

        // Finish simulation
        $stop;
    end

endmodule
