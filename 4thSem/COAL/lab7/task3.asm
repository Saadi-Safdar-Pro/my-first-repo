.data
    prompt: .asciiz "Enter an integer: "
    orig_msg: .asciiz "Original: "
    mod_msg: .asciiz "\nModified (LSB set): "

.text
.globl main
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    ori $t1, $t0, 1

    li $v0, 4
    la $a0, orig_msg
    syscall

    li $v0, 1
    move $a0, $t0
    syscall

    li $v0, 4
    la $a0, mod_msg
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall