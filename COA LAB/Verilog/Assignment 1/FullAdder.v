// 1-bit Full Adder
module full_adder (
    input wire A,        // First input bit
    input wire B,        // Second input bit
    input wire Cin,      // Carry-in
    output wire Sum,     // Sum output
    output wire Cout     // Carry-out
);

    // Sum and Carry-out calculations
    assign Sum = A ^ B ^ Cin;      // Sum is the XOR of A, B, and Cin
    assign Cout = (A & B) | (Cin & (A ^ B)); // Carry-out calculation

endmodule


// n-bit Full Adder
module n_bit_full_adder #(
    parameter N = 3        // Default to 4-bit, can be adjusted as needed
)(
    input wire [N-1:0] A,      // N-bit input A
    input wire [N-1:0] B,      // N-bit input B
    input wire Cin,            // Carry-in for the first bit
    output wire [N-1:0] Sum,   // N-bit sum output
    output wire Cout           // Carry-out from the last bit
);

    // Internal carry signal
    wire [N-1:0] Carry;        // Carry signals between full adders

    // Instantiate n 1-bit full adders
    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : FA
            if (i == 0) begin
                full_adder fa (
                    .A(A[i]),
                    .B(B[i]),
                    .Cin(Cin),
                    .Sum(Sum[i]),
                    .Cout(Carry[i])
                );
            end else if (i == N-1) begin
                full_adder fa (
                    .A(A[i]),
                    .B(B[i]),
                    .Cin(Carry[i-1]),
                    .Sum(Sum[i]),
                    .Cout(Cout)
                );
            end else begin
                full_adder fa (
                    .A(A[i]),
                    .B(B[i]),
                    .Cin(Carry[i-1]),
                    .Sum(Sum[i]),
                    .Cout(Carry[i])
                );
            end
        end
    endgenerate

endmodule
