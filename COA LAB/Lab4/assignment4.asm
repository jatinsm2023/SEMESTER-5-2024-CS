.data
myArray: .space 128
myArraySize: .word 32
input: .asciiz "Enter M, d, N: "
binOutput: .asciiz "The exponent in binary is "
expoOutput: .asciiz "The exponentiation value is "
space: .asciiz " "
newline: .asciiz "\n"

.text
main:
    la $a0, input
    li $v0, 4
    syscall

    li $v0, 5    
    syscall
    move $s1, $v0

    li $v0, 5    
    syscall
    move $s2, $v0

    li $v0, 5    
    syscall
    move $s3,  $v0

    move $t1,  $s2

decimalToBin:
    addi $t2, $zero, 31
    mul $t2, $t2, 4

binLoop:
    beq $t1, 0, endBinLoop

    and $t3, $t1, 1
    sw $t3, myArray($t2)

    sub $t2, $t2, 4
    srl $t1, $t1, 1

    j binLoop

endBinLoop:
    la $a0, binOutput
    li $v0, 4
    syscall

    addi $t1, $t2, 4
    addi $t2, $t2, 4

printBin:
    beq $t1, 128, printEnd

    lw $a0, myArray($t1)
    li $v0, 1
    syscall

    addi $t1, $t1, 4

    j printBin

printEnd:
    la $a0, newline
    li $v0, 4
    syscall

modExponentiation:
    addi $t1, $t2, 4
    move $t3, $s1

expoLoop:
    beq $t1, 128, endExpoLoop

    move $a0, $t3
    jal square

    move $t3, $v0
    lw $t5, myArray($t1)

    beq $t5, 0, multSkip

    move $a0, $t3
    jal multiply
    move $t3, $v0

multSkip:
    addi $t1, $t1, 4
    j expoLoop

endExpoLoop:
    la $a0, expoOutput
    li $v0, 4
    syscall

    move $a0, $t3
    li $v0, 1
    syscall

exit:
    la $a0, newline
    li $v0, 4
    syscall

    li $v0, 10                                                      
    syscall

square:
    mul $t4, $a0, $a0
    div $t4, $s3
    mfhi $v0

    jr $ra

multiply:
    mul $t4, $a0, $s1
    div $t4, $s3
    mfhi $v0
    
    jr $ra
