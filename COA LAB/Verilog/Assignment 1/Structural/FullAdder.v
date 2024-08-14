module full_adder (
    input A, B, Cin,     // 1-bit inputs: A, B, and Carry-in (Cin)
    output Sum, Cout     // 1-bit outputs: Sum and Carry-out (Cout)
);

    // Structural implementation using basic gates
    assign Sum = A ^ B ^ Cin;
    assign Cout = (A & B) | (B & Cin) | (Cin & A);

endmodule


module full_adder_nbit #(parameter N = 4) (
    input [N-1:0] A, B,        // N-bit inputs A and B
    input Cin,                 // 1-bit input carry-in
    output [N-1:0] Sum,        // N-bit output sum
    output Cout                // 1-bit output carry-out
);

    wire [N:0] carry;          // Internal carry signals
    assign carry[0] = Cin;     // Initial carry-in

    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : gen_full_adder
            full_adder fa (
                .A(A[i]),
                .B(B[i]),
                .Cin(carry[i]),
                .Sum(Sum[i]),
                .Cout(carry[i+1])
            );
        end
    endgenerate

    assign Cout = carry[N];    // Final carry-out

endmodule
