.data
array: .space 256 
input: .asciiz "Enter N: "
output: .asciiz "Maximum Subarray Sum: "

.text

main:
    li $v0 4
    la $a0 input
    syscall

    li $v0 5
    syscall
    move $t4,$v0 # t4 = N

    li $t0,0 # start interations (i)

takeinput:
    beq $t0,$t4,double
    li $v0 5
    syscall
    mul $t1,$v0,1
    mul $t2,$t0,4
    sw $t1,array($t2)
    addi $t0,$t0,1
    j takeinput




double:

    li $t0 0 # iterator (i)
    li $t2 0 # running sum
    li $t3 0 # min sum
    li $t5 0 # total sum
find:
    beq $t0,$t4,printsol
    mul $t6,$t0,4
    lw $t1,array($t6) # t1 = array[i]
    add $t5,$t5,$t1
    add $t2,$t2,$t1 # sum += array[i]
    ble $t2,$t3,update # if sum < maxsum
    bgt $t2,0,updatesum # if sum > 0
    addi $t0,$t0,1
    j find

updatesum:
    li $t2,0 # running sum = 0
    addi $t0,$t0,1
    j find
update:
    move $t3,$t2
    addi $t0,$t0,1
    j find

printsol:
    li $v0 4
    la $a0 output
    syscall

    sub $t5,$t5,$t3 # max sum = total sum - minsubarray sum

    li $v0 1
    move $a0,$t5
    syscall

    li $v0 10
    syscall