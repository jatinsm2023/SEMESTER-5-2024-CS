module full_adder_nbit_behavioral #(parameter N = 4) (
    input [N-1:0] A, B,    // N-bit inputs A and B
    input Cin,             // 1-bit input carry-in
    output [N-1:0] Sum,    // N-bit output sum
    output Cout            // 1-bit output carry-out
);

    reg [N:0] temp; // Temporary register to hold the sum with carry

    always @(*) begin
        temp = A + B + Cin; // Perform the addition of A, B, and Cin
    end

    assign Sum = temp[N-1:0]; // The lower N bits are the Sum
    assign Cout = temp[N];    // The Nth bit is the Carry-out

endmodule
