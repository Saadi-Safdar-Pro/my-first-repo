.data
    prompt: .asciiz "Enter an integer (e.g., 25): "
    res_msg: .asciiz "Result (Last 4 bits): "

.text
.globl main
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    andi $t1, $t0, 15

    li $v0, 4
    la $a0, res_msg
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall