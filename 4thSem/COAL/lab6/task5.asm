.data
    prompt: .asciiz "Enter number: "
    e_msg:  .asciiz "Even"
    o_msg:  .asciiz "Odd"

.text
main:
    li $v0, 4
    la $a0, prompt
    syscall
    li $v0, 5
    syscall
    move $t0, $v0

    li $t1, 2
    div $t0, $t1
    mfhi $t2

    beq $t2, $zero, is_even
    
    li $v0, 4
    la $a0, o_msg
    syscall
    j exit

is_even:
    li $v0, 4
    la $a0, e_msg
    syscall

exit:
    li $v0, 10
    syscall