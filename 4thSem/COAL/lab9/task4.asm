.data
newline: .asciiz "\n"

.text
.globl main

main:
    li $t0, 20         # start value = 20
    li $t1, 0          # limit = 0

loop:
    # print current value of $t0
    li $v0, 1
    move $a0, $t0
    syscall

    # print newline
    li $v0, 4
    la $a0, newline
    syscall

    addi $t0, $t0, -3  # decrement by 3
    bgt $t0, $t1, loop # loop while counter > 0

# exit
    li $v0, 10
    syscall
