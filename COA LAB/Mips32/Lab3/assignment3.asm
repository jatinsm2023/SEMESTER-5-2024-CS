.data
array:  .space 40
array_size: .word 10
input: .asciiz "Enter the array of 10 elements: "
output: .asciiz "Heapified array: "
space: .asciiz " "

.text
.globl main

make_heap:
    la $a0, array
    lw $a1, array_size
    li $a2, 4

start_heapify:
    bltz $a2, print_arr

    jal heapify
    sub $a2, $a2, 1
    j start_heapify

heapify:
    addi $sp, $sp, -24

    sw $ra, 20($sp)
    sw $a0, 0($sp)
    sw $a1, 4($sp)
    sw $a2, 8($sp)
    sw $t0, 12($sp)
    sw $t1, 16($sp)

    move $t0, $a2
    mul $t1, $a2, 2
    addi $t1, $t1, 1

    mul $t2, $a2, 2
    addi $t2, $t2, 2

    bge $t1, $a1, check_right

    mul $t3, $t1, 4
    add $t3, $t3, $a0
    lw $t3, 0($t3)

    mul $t4, $t0, 4
    add $t4, $t4, $a0
    lw $t4, 0($t4)

    ble $t3, $t4, check_right
    move $t0, $t1

check_right:
    bge $t2, $a1, swap_check

    mul $t3, $t2, 4
    add $t3, $t3, $a0
    lw $t3, 0($t3)

    mul $t4, $t0, 4
    add $t4, $t4, $a0
    lw $t4, 0($t4)

    ble $t3, $t4, swap_check
    move $t0, $t2

swap_check:
    beq $t0, $a2, end_heapify

    mul $t3, $a2, 4
    add $t3, $t3, $a0
    lw $t4, 0($t3)

    mul $t5, $t0, 4
    add $t5, $t5, $a0
    lw $t6, 0($t5)

    sw $t6, 0($t3)
    sw $t4, 0($t5)

    move $a2, $t0
    jal heapify

end_heapify:
    lw $ra, 20($sp)
    lw $a0, 0($sp)
    lw $a1, 4($sp)
    lw $a2, 8($sp)
    lw $t0, 12($sp)
    lw $t1, 16($sp)

    addi $sp, $sp, 24
    jr $ra

main:
    li $v0, 4
    la $a0, input
    syscall

    la $t0, array
    li $t1, 10

input_loop:
    beqz $t1, make_heap

    li $v0, 5
    syscall

    sw $v0, 0($t0)
    addi $t0, $t0, 4
    sub $t1, $t1, 1

    j input_loop

print_arr:
    li $v0, 4
    la $a0, output
    syscall

    la $t0, array
    lw $t1, array_size

print_loop:
    beqz $t1, exit

    lw $a0, 0($t0)
    li $v0, 1
    syscall

    li $v0, 4
    la $a0, space
    syscall

    addi $t0, $t0, 4
    sub $t1, $t1, 1
    j print_loop

exit:
    li $v0, 10
    syscall
