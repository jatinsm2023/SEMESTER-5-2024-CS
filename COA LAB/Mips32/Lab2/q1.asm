.data
input: .asciiz "Enter n: "
quotient: .asciiz "Quotient: "
remainder: .asciiz "Remainder: "	
space: .asciiz "\n"

.text
.globl main

main:
	li $t1, 1

	li $v0, 4
	la $a0, input
	syscall
	
	li $v0, 5
	syscall
	move $t0, $v0
	
	addi $t1, $zero, 0
	addi $t2, $zero, 0
	addi $t4, $zero, 4
	addi $t5, $zero, 0
	addi $t6, $zero, 255
	
	
divloop:
	beq $t2, $t4, print

	andi $t3, $t0, 255
	srl $t5, $t0, 8

	bne $t0, $t6, else

	addi $t5, $t5, 1
	li $t3, 0
	add $t1, $t1, $t5
	addi $t0, $zero, 0
	addi $t2, $t2, 1
	j divloop

else:
	add $t1, $t1, $t5
	add $t0, $t5, $t3
	addi $t2, $t2, 1
	j divloop
	
print:
	la $a0, quotient
	li $v0, 4
	syscall
	
	add $a0, $t1, $zero
	li $v0, 1
	syscall
	
	la $a0, space
	li $v0, 4
	syscall
	
	la $a0, remainder
	li $v0, 4
	syscall
	
	add $a0, $t3, $zero
	li $v0, 1
	syscall
	
exit:
	li $v0, 10
	syscall
