.data
    val1: .word 20
    val2: .word 5
    msgSub: .asciiz "Subtraction Result: "
    msgMul: .asciiz "\nMultiplication Result: "

.text
main:
    lw $t0, val1
    lw $t1, val2
    sub $t2, $t0, $t1    # Subtract
    mul $t3, $t0, $t1    # Multiply

    li $v0, 4            # Print Label
    la $a0, msgSub
    syscall
    li $v0, 1            # Print Sub Result
    move $a0, $t2
    syscall

    li $v0, 4            # Print Label
    la $a0, msgMul
    syscall
    li $v0, 1            # Print Mul Result
    move $a0, $t3
    syscall

    li $v0, 10           # Exit
    syscall