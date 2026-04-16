.data
    orig_msg:   .asciiz "Original Value: "
    res_msg:    .asciiz "\nResulting Value: "

.text
.globl main

main:
    li $t0, 11

    li $v0, 4
    la $a0, orig_msg
    syscall

    li $v0, 1
    move $a0, $t0
    syscall

    li $t1, 1
    sll $t1, $t1, 3

    xor $t2, $t0, $t1

    li $v0, 4
    la $a0, res_msg
    syscall

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 10
    syscall