.data
    prompt: .asciiz "Enter an integer: "
    res_msg: .asciiz "Number of set bits (1s): "

.text
.globl main
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    li $t1, 0

count_loop:
    beq $t0, $zero, end_count
    andi $t2, $t0, 1
    add $t1, $t1, $t2
    srl $t0, $t0, 1
    j count_loop

end_count:
    li $v0, 4
    la $a0, res_msg
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall