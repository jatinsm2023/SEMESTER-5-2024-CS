.data
string: .space 256
inputsize: .asciiz "Enter size of string: "
input: .asciiz "Enter string: "
output: .asciiz "The reversed string is: "

.text
.globl main

main:
    li $v0, 4
    la $a0, inputsize
    syscall

    li $v0, 5
    syscall
    move $s1, $v0

    li $v0, 4
    la $a0, input
    syscall

    li $v0, 8
    la $a0, string
    li $a1, 256
    syscall

    la $t0, string
    addi $t1, $zero, 0
    li $t2, 0

reverse:
    beq $t1, $s1, printloop
    lb $t3, 0($t0)
    addi $sp, $sp, -1
    sb $t3, 0($sp)
    addi $t1, $t1, 1 
    addi $t0, $t0, 1
    j reverse

printloop:
    li $v0, 4
    la $a0, output
    syscall

    li $t2, 0

printchar:
    beq $t2, $s1, exit
    lb $t3, 0($sp)

    li $v0, 11
    move $a0, $t3
    syscall

    addi $sp, $sp, 1
    addi $t2, $t2, 1
    j printchar

exit:
    li $v0, 10
    syscall
