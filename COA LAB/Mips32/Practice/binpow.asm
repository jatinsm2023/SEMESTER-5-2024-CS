.data 
binaryArray: .space 128
size: .word 16
input: .asciiz "Enter m, d, n: "
output: .asciiz "Answer is: "
binary: .asciiz "Binary : "
space: .asciiz " "
line: .asciiz "\n"

.text

main:
    # Prompt user for input
    li $v0, 4
    la $a0, input
    syscall

    # Read m
    li $v0, 5
    syscall
    move $t6, $v0

    # Read d
    li $v0, 5
    syscall
    move $s0, $v0

    # Read n
    li $v0, 5
    syscall
    move $s3, $v0

    # Initialize variables
    addi $t0, $zero, 0   # bit counter

    # Convert d to binary and store in binaryArray
    j binaryExpo

binaryExpo:
    beq $s0, 0, arrayprint
    div $s0, $s0, 2
    mfhi $t8

    beq $t8, 0, even
    mul $t9, $t0, 4
    addi $t7, $zero, 1
    sw $t7, binaryArray($t9)
    addi $t0, $t0, 1
    j binaryExpo

even:
    mul $t9, $t0, 4
    addi $t7, $zero, 0
    sw $t7, binaryArray($t9)
    addi $t0, $t0, 1
    j binaryExpo

#print binaryArray
arrayprint:
    addi $t2, $zero, 0
    li $v0, 4
    la $a0, binary
    syscall

    j loop

loop:
    beq $t2, $t0, bahar
    mul $t9, $t2, 4
    lw $t3, binaryArray($t9)
    li $v0, 1
    add $a0, $t3, $zero
    syscall
    li $v0, 4
    la $a0, space
    syscall
    addi $t2, $t2, 1
    j loop

bahar:
    addi $t2, $zero, 0
    li $t4, 1      # Initialize ans with 1 (for modular exponentiation)
    move $t5, $t6  # Initialize base with m
    j real

real:
    beq $t2, $t0, print
    
    mul $t9, $t2, 4
    lw $t3, binaryArray($t9)
    
    beq $t3, 1, multi
    jal square
    addi $t2, $t2, 1
    j real

multi:
    jal multiplication
    addi $t2, $t2, 1
    j real

print:
    li $v0, 4
    la $a0, output
    syscall

    li $v0, 1
    move $a0, $t4
    syscall

    j exit

multiplication:
    mul $v0, $t4, $t5
    div $v0, $s3
    mflo $t4    # Store the result in $t4 (ans)
    jr $ra

square:
    mul $v0, $t5, $t5
    div $v0, $s3
    mflo $t5    # Update base (m) with (m * m) % n
    jr $ra

exit:
    li $v0, 10
    syscall
