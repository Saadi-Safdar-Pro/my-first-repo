.data
    a: .word 10
    val_b: .word 20
    c: .word 5
    d: .word 4
    res1: .word 0
    res2: .word 0
    res3: .word 0
    msg1: .asciiz "Result 1 (a + val_b - c) = "
    msg2: .asciiz "\nResult 2 ((a * d) + c) = "
    msg3: .asciiz "\nResult 3 ((val_b / c) + d) = "

.text
main:
    lw $t0, a
    lw $t1, val_b
    lw $t2, c
    lw $t3, d

    add $t4, $t0, $t1
    sub $t4, $t4, $t2
    sw $t4, res1

    mul $t5, $t0, $t3
    add $t5, $t5, $t2
    sw $t5, res2

    div $t1, $t2
    mflo $t6
    add $t6, $t6, $t3
    sw $t6, res3

    li $v0, 4
    la $a0, msg1
    syscall
    li $v0, 1
    lw $a0, res1
    syscall

    li $v0, 4
    la $a0, msg2
    syscall
    li $v0, 1
    lw $a0, res2
    syscall

    li $v0, 4
    la $a0, msg3
    syscall
    li $v0, 1
    lw $a0, res3
    syscall

    li $v0, 10
    syscall