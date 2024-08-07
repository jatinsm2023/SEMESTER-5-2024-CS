.data 
input: .asciiz "Enter x: "
output: .asciiz "e^(x) is: "
interation: .asciiz "Number of Interations: "
newline: .asciiz "\n"
.text

main:
    li $v0 4
    la $a0 input
    syscall

    li $v0 5
    syscall
    move $t0, $v0 # t0 - x

    li $t1,1 # intermediate sum
    li $t2,1 # real sum 
    li $t3,1 # t3 - iteration number

loop:
    beq $t1,0, printsol
    mul $t4, $t1,$t0 # val*x
    div $t4,$t4,$t3 # find x/n
    mflo $t4
    
    move $t1,$t4 # val = val*x/n
    add $t2,$t2,$t1 # sum+=val

    addi $t3,$t3,1 # increase interation
    j loop

printsol:
    li $v0 4
    la $a0 output
    syscall

    li $v0 1
    add $a0,$t2,$zero
    syscall
 
    li $v0 4
    la $a0 newline
    syscall

    li $v0 4
    la $a0 interation
    syscall

    li $v0 1
    sub $t3,1
    move $a0, $t3
    syscall

    li $v0 10
    syscall