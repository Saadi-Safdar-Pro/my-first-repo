.data
    a_val:  .word 37
    b_val:  .word 45
    c_val:  .word 12
    d_val:  .word 20
    res1:   .word 0
    res2:   .word 0
    res3:   .word 0
    nl:     .asciiz "\n"

.text
main:
    lw $t0, a_val
    lw $t1, b_val
    lw $t2, c_val
    lw $t3, d_val

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

    li $v0, 1
    lw $a0, res1
    syscall

    li $v0, 4
    la $a0, nl
    syscall

    li $v0, 1
    lw $a0, res2
    syscall

    li $v0, 4
    la $a0, nl
    syscall

    li $v0, 1
    lw $a0, res3
    syscall

    li $v0, 10
    syscall