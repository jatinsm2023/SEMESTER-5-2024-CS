.data 

input: .asciiz "Enter n: "
output: .asciiz "Sum of 1 to n is: "
space: .asciiz " "
newline: .asciiz "\n"

.text 

main:   
    li $v0 4
    la $a0 input
    syscall 

    li $v0 5
    syscall
    move $a0,$v0

    jal sum

    move $t1, $v0

    li $v0, 4
    la $a0, output
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 4
    la $a0, newline
    syscall

    li $v0, 10
    syscall

sum:
    beq $a0, 0, return 
    addi $sp, $sp, -4
    sw $ra, 0($sp)
    addi $a0, $a0, -1
    jal sum 
    addi $a0, $a0 , 1
    add $v0,$a0,$v0
    lw $ra, 0($sp)
    addi $sp, $sp, 4
    jr $ra

return:
    li $v0 0
    jr $ra