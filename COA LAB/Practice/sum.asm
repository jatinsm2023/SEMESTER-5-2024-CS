.data

input: .asciiz "Enter length: "
output: .asciiz "The sum is: "
array: .word 1,2,3,4,1,2,3,4
length: .word 8

.text

main:
    addi $t0, $zero,0
    addi $t3,$zero,8

    li $v0, 1
    add $a0,$t3,$zero
    syscall

    addi $t4, $zero,0
    addi $t6, $zero,0   

    j loop
    

loop:
    bge $t6,$t3,sum 
    lw $t5,array($t0)
    
    li $v0, 1
    add $a0,$t5,$zero
    syscall

    add $t4,$t4,$t5
    addi $t0,$t0,4
    addi $t6,$t6,1
    j loop

sum:
    li $v0 4
    la $a0 output
    syscall

    li $v0 1
    add $a0,$t4,$zero
    syscall
    j exit
exit:
    li $v0 10
    syscall