.data
    prompt1: .asciiz "Enter first integer: "
    prompt2: .asciiz "Enter second integer: "
    res_msg: .asciiz "XOR Result: "

.text
.globl main
main:
    li $v0, 4
    la $a0, prompt1
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    li $v0, 4
    la $a0, prompt2
    syscall

    li $v0, 5
    syscall
    move $t1, $v0

    xor $t2, $t0, $t1

    li $v0, 4
    la $a0, res_msg
    syscall

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 10
    syscall