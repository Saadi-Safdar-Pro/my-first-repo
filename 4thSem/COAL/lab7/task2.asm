.data
    prompt: .asciiz "Enter an integer: "
    even_msg: .asciiz "The number is Even."
    odd_msg: .asciiz "The number is Odd."

.text
.globl main
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    andi $t1, $t0, 1

    beq $t1, $zero, is_even

    li $v0, 4
    la $a0, odd_msg
    syscall
    j exit

is_even:
    li $v0, 4
    la $a0, even_msg
    syscall

exit:
    li $v0, 10
    syscall