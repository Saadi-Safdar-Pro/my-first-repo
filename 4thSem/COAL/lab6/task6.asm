.data
    prompt: .asciiz "Enter number: "
    is_p:   .asciiz "Prime"
    not_p:  .asciiz "Not Prime"

.text
main:
    li $v0, 4
    la $a0, prompt
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    li $t1, 2
    blt $t0, $t1, is_not_prime

loop:
    mul $t2, $t1, $t1
    bgt $t2, $t0, is_prime

    div $t0, $t1
    mfhi $t3

    beq $t3, $zero, is_not_prime

    addi $t1, $t1, 1
    j loop

is_prime:
    li $v0, 4
    la $a0, is_p
    syscall
    j exit

is_not_prime:
    li $v0, 4
    la $a0, not_p
    syscall

exit:
    li $v0, 10
    syscall