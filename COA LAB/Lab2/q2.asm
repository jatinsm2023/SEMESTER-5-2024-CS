    .data
space:	.asciiz " "
line:	.asciiz	"\n"
colonsp:	.asciiz ": "
array:	.word	5, 4, 3, 2, 1  # Predefined array
size:	.word	5
inputK: .asciiz "Enter K(should be less than array size(5)): "

ksmallest:    .asciiz "Kth Smallest: "
klargest:    .asciiz "Kth Largest: "

    .text
    .globl	main
main:

receive_values_loop_info:
    li	$v0, 4
    la	$a0, line
    syscall


sort_prep:
    la	$t0, array
    lw	$t1, size
    li	$t2, 1

  
    li	$v0, 4
    la	$a0, inputK
    syscall

    li	$v0, 5
    syscall
    move $t8, $v0
    sub $t8,$t8,1
    sub $t9,$t1,$t8
    sub $t9,$t9,1
sort_xloop:
    la	$t0, array
    bge	$t2, $t1, sort_xloop_end
    move	$t3, $t2
sort_iloop:
    la	$t0, array
    mul	$t5, $t3, 4
    add	$t0, $t0, $t5
    ble	$t3, $zero, sort_iloop_end
    lw	$t7, 0($t0)
    lw	$t6, -4($t0)
    bge	$t7, $t6, sort_iloop_end
    lw	$t4, 0($t0)
    sw	$t6, 0($t0)
    sw	$t4, -4($t0)
    sub	$t3, $t3, 1
    j	sort_iloop
sort_iloop_end:
    addi	$t2, $t2, 1
    j	sort_xloop
sort_xloop_end:
    li	$v0, 4
    la	$a0, line
    syscall
    jal	print
exit:
    li	$v0, 10
    syscall

print:
print_loop_prep:
    la	$t0, array
    lw	$t1, size
    li	$t2, 0
print_loop:
    beq $t8,$t2,printK
    beq $t9,$t2,printKprev

    bge	$t2, $t1, print_end

    addi	$t0, $t0, 4
    addi	$t2, $t2, 1
    j	print_loop
    
print_end:
    li	$v0, 4
    la	$a0, line
    syscall
    jr	$ra

printK:
    li	$v0, 4
    la	$a0, ksmallest
    syscall
    li	$v0, 4
    la	$a0, colonsp
    syscall
    li	$v0, 1
    lw	$a0, 0($t0)
    syscall
    li	$v0, 4
    la	$a0, line
    syscall
    bge	$t2, $t1, print_end
    
    addi	$t0, $t0, 4
    addi	$t2, $t2, 1
    j	print_loop
    

printKprev: 
    li	$v0, 4
    la	$a0, klargest
    syscall
    li	$v0, 4
    la	$a0, colonsp
    syscall
    li	$v0, 1
    lw	$a0, 0($t0)
    syscall
    li	$v0, 4
    la	$a0, line
    syscall
    bge	$t2, $t1, print_end
    
    addi	$t0, $t0, 4
    addi	$t2, $t2, 1
    j	print_loop
  