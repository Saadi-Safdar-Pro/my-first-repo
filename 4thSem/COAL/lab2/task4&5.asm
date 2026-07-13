.data
    num: .word 4
    square: .word 0
    msg: .asciiz "The square is: "

.text
main:
    lw $t0, num
    mul $t1, $t0, $t0    # 4 * 4
    sw $t1, square       # Store in memory

    li $v0, 4
    la $a0, msg
    syscall
    li $v0, 1
    lw $a0, square       # Print from memory
    syscall

    li $v0, 10
    syscall