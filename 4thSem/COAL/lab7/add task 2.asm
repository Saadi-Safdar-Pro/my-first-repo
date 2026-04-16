.data
num1:   .word 12
num2:   .word 10
msg:    .asciiz "AND Result: "

.text
.globl main

main:
    # Load from memory
    lw $t0, num1
    lw $t1, num2

    # AND operation
    and $t2, $t0, $t1

    # Print message
    li $v0, 4
    la $a0, msg
    syscall

    # Print result
    li $v0, 1
    move $a0, $t2
    syscall

    # Exit
    li $v0, 10
    syscall