.data 
array: .space 4096
inrow: .asciiz "Enter Row: "
incol: .asciiz "Enter Column: "
space:  .asciiz " "
newline: .asciiz "\n"
inter: .asciiz "Enter Element: "

.text

main:
    li $v0 4
    la $a0 inrow
    syscall

    li $v0 5
    syscall

    move $s0 $v0 # s0 - number of rows

    li $v0 4
    la $a0 incol
    syscall

    li $v0 5
    syscall

    move $s1 $v0 # s1 - number of cols


    li $t0 0 # t0 - i
    li $t1 0 # t1 - j
    li $t4 0 # t4 address


    
makearray:
    beq $t0, $s0, printarray
    addi $t1, $zero, 0
    j innerloop

innerloop:
    beq $t1, $s1, innerloopend

    li $v0 4
    la $a0 inter
    syscall

    li $v0 5
    syscall

    mul $t4, $t4, 4
    sw $v0, array($t4)
    div $t4, $t4, 4

    addi $t1, $t1, 1
    addi $t4, $t4, 1

    j innerloop

innerloopend:
    addi $t0, $t0, 1

    j makearray

printarray:
    li $t0 0 # t0 - i
    li $t1 0 # t1 - j
    li $t4 0 # t4 address

printarrayloop:
    beq $t0, $s0, endprintarray
    addi $t1, $zero, 0

printarrayinnerloop:
    beq $t1, $s1, printarrayinnerloopend

    mul $t4, $t4, 4
    lw $a0, array($t4)
    div $t4, $t4, 4

    li $v0, 1
    syscall

    li $v0, 4
    la $a0, space
    syscall

    addi $t1, $t1, 1
    addi $t4, $t4, 1
    j printarrayinnerloop

printarrayinnerloopend:
    li $v0, 4
    la $a0, newline
    syscall

    addi $t0, $t0, 1

    j printarrayloop


endprintarray:
    li $v0, 10
    syscall