.data 
array: .word 10,3,2,3,1,4,3,-1,-1,-1
asize: .word 10
space: .asciiz " "

.text

main:
    addi $t0,$zero,0 # t0 - j
    lw $s0,asize
    sub $s0,$s0,1
    j loop

loop:
    bgt $t0,$s0,bahar
    mul $a0,$t0,4
    lw $t1,array($a0) # t1 - array[j] key

    sub $t2,$t0,1 # t2 - j-1
    j loop2

loop2:
    ble $t2,-1, exit
    mul $a0,$t2,4
    lw $t3,array($a0) # t3 - array[i] 
    ble $t3,$t1,exit
    
    addi $t4,$t2,1
    mul $a0,$t4,4
    sw $t3,array($a0) # a[i+1] = a[i]

    sub $t2,$t2,1
    j loop2

exit:
    addi $t2,$t2,1
    mul $a0,$t2,4
    sw $t1,array($a0) # a[j] = key
    addi $t0,$t0,1
    j loop

bahar:
    addi $t0,$zero,0 # t0 - j
    j loop3

loop3:
    bgt $t0,$s0,exit2
    mul $a0,$t0,4
    lw $a0,array($a0)
    li $v0,1
    syscall
    li $v0,4
    la $a0,space
    syscall
    addi $t0,$t0,1
    j loop3

exit2:
    li $v0,10
    syscall