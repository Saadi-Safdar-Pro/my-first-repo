.data
    number: .word 7
    msg: .asciiz "Updated Value: "

.text
main:
    lw $t0, number
    addi $t0, $t0, 5
    sw $t0, number

    li $v0, 4
    la $a0, msg
    syscall

    li $v0, 1
    lw $a0, number
    syscall

    li $v0, 10
    syscall