.data 

.text

main:
    li $v0, 5
    syscall

    move $a1, $v0
    li $t1, 0

func:
    beq $a1, 1, print
    addi $t1, $t1, 1
    andi $t0, $a1, 1
    beq $t0, 1, odd
    div $a1, $a1, 2
    mflo $a1
    j func

odd:
    mul $a1, $a1, 3
    addi $a1, $a1, 1
    j func

print:
    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall