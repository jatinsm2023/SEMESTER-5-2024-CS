.data
inputArr: .space 4096
inpRows: .asciiz "Enter m: "
inpCols: .asciiz "Enter n: "
inpA: .asciiz "Enter a: "
inpB: .asciiz "Enter b: "
output: .asciiz "The matrix transpose is: "
newline: .asciiz "\n"
space: .asciiz " "

.text
.globl main

main:
    li $v0, 4
    la $a0, inpRows
    syscall

    li $v0, 5
    syscall
    move $s1, $v0

    li $v0, 4
    la $a0, inpCols
    syscall

    li $v0, 5
    syscall
    move $s0, $v0

    li $v0, 4
    la $a0, inpA
    syscall

    li $v0, 5
    syscall
    move $s2, $v0

    li $v0, 4
    la $a0, inpB
    syscall

    li $v0, 5
    syscall
    move $s3, $v0

    la $t0, 0
    li $t1, 0
    li $t2, 0

makeArr:
    beq $t2, $s0, makeArrEnd
    li $t1, 0
    j innerLoop

innerLoop:
    beq $t1, $s1, innerLoopEnd

    move $a0, $t1
    move $a1, $t2
    jal getVal

    mul $t0, $t0, 4
    sw $v1, inputArr($t0)
    div $t0, $t0, 4

    addi $t0, $t0, 1
    addi $t1, $t1, 1
    j innerLoop

innerLoopEnd:
    addi $t2, $t2, 1
    j makeArr

makeArrEnd:
    li $t1, 0
    la $t0, 0

    li $v0, 4
    la $a0, output
    syscall

    li $v0, 4
    la $a0, newline
    syscall

printLoop:
    beq $t1, $s0, printLoopEnd
    li $t2, 0
    j innerPrintLoop

innerPrintLoop:
    beq $t2, $s1, innerPrintLoopEnd

    mul $t0, $t0, 4
    lw $a0, inputArr($t0)
    div $t0, $t0, 4

    li $v0, 1
    syscall

    li $v0, 4
    la $a0, space
    syscall

    addi $t0, $t0, 1
    addi $t2, $t2, 1
    j innerPrintLoop

innerPrintLoopEnd:
    li $v0, 4
    la $a0, newline
    syscall

    addi $t1, $t1, 1
    j printLoop

printLoopEnd:
    li $v0, 10
    syscall

getVal:
    addi $sp, $sp, -4
    sw $ra, 0($sp)

    li $a2, -1
    add $a3, $a0, $a1
    jal power
    move $t4, $v0

    move $a2, $s2
    move $a3, $a0
    jal power
    move $t5, $v0

    move $a2, $s3
    move $a3, $a1
    jal power
    move $t6, $v0

    mul $v1, $t5, $t6
    mul $v1, $v1, $t4

    lw $ra, 0($sp)
    addi $sp, $sp, 4

    jr $ra

power:
    li $v0, 1
    li $t8, 0
    j powerLoop

powerLoop:
    beq $t8, $a3, powerEnd
    mul $v0, $v0, $a2
    addi $t8, $t8, 1
    j powerLoop

powerEnd:
    jr $ra
