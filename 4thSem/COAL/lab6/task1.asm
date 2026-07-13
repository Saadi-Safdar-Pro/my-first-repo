.data
    p:       .word 10
    q:       .word 5
    r:       .word 20
    s:       .word 4
    res1:    .word 0
    res2:    .word 0
    msg1:    .asciiz "Result 1 = "
    msg2:    .asciiz "\nResult 2 = "

.text
main:
    lw $t0, p
    lw $t1, q
    lw $t2, r
    lw $t3, s

    mul $t4, $t0, $t1
    div $t2, $t3
    mflo $t5
    add $t6, $t4, $t5
    sw $t6, res1

    add $t4, $t0, $t2
    sub $t5, $t1, $t3
    mul $t7, $t4, $t5
    sw $t7, res2

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

    li $v0, 10
    syscall