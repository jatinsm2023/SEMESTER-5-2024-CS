.data
prompt1: .asciiz "Enter n: "
result: .asciiz "Prime factors: "
excp: .asciiz "1 doesn't have prime factors."
space: .asciiz " "

.text

main:
    addi $s0, $zero, 2
    li $v0, 4
    la $a0, prompt1
    syscall

    li $v0, 5
    syscall
    move $t1,$v0
    add $t2, $zero, $t1
    jal primefactors

primefactors:
    beq $t2, 1, one
    beq $t1, 1, exit

loop1:
    div $t1,$s0 
    mfhi $t3
    beq $t3,0,print
    addi $s0,$s0,1
    j loop1

print:
    li $v0, 1
    move $a0,$s0
    syscall

    li $v0, 4
    la $a0, space
    syscall

    mflo $t1
    addi $s0, $zero, 2
    j primefactors

one:
    li $v0, 4
    la $a0, excp
    syscall
    j exit

exit:
    li $v0, 10
    syscall
    