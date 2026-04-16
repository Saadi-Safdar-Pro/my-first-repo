.data
msg1:   .asciiz "Enter first number: "
msg2:   .asciiz "Enter second number: "
result: .asciiz "AND Result: "

.text
.globl main

main:
    # Input first number
    li $v0, 4
    la $a0, msg1
    syscall

    li $v0, 5
    syscall
    move $t0, $v0

    # Input second number
    li $v0, 4
    la $a0, msg2
    syscall

    li $v0, 5
    syscall
    move $t1, $v0

    # AND operation
    and $t2, $t0, $t1

    # Print result message
    li $v0, 4
    la $a0, result
    syscall