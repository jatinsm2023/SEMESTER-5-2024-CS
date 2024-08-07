.data
inputnum: .asciiz "Enter Size of Array: "
takearrayinput: .asciiz "Enter numbers (each linew by line): "
answer: .asciiz "Longest increasing subarray is: "
space: .asciiz " "

.text

array: .space 100
main:
	la $a0 , inputnum 
	li $v0 , 4
	syscall 
	li $v0 , 5
	syscall 
	move $t0 , $v0
    la $t2, array
    li $t3, 1
    la $a0 , takearrayinput
	li $v0 , 4
	syscall 

takeinputinloop:
    bgt $t3, $t0, setup
    li $v0, 5
    syscall
    sw $v0, 0($t2)
    addi $t2, $t2, 4
    addi $t3, $t3, 1
    b takeinputinloop

setup:
    la $t2, array
    li $t3, 2
    li $t4, 1
    li $s0, 1
    addi $s1, $t2, 4

linincsubarray:
    bgt $t3, $t0, print
    lw $s2, 0($t2)
    lw $s3, 4($t2)
    bgt $s3, $s2, skipit
    blt $t4, $s0, sval
    addi $s1, $t2, 4
    move $s0, $t4
sval:
    li $t4, 1
    b new
skipit:
    addi $t4, 1

new:
    addi $t3, $t3, 1
    addi $t2, $t2, 4
    b linincsubarray

print:
    blt $t4, $s0, pgo
    addi $s1, $t2, 4
    move $s0, $t4
pgo:
    la $a0 , answer
    li $v0 , 4
    syscall
    li $t5, 4
    move $s2, $s0
    mul $s0, $s0, $t5
    sub $s1, $s1, $s0

li $t1, 1
arrprint:
    bgt $t1, $s2, exit
    lw $a0, 0($s1)
    li $v0, 1
    syscall
    la $a0, space
    li $v0, 4
    syscall
    addi $s1, $s1, 4
    addi $t1, $t1, 1
    b arrprint
exit:
    li $v0 , 10 
	syscall

