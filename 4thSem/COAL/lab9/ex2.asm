.data
newline: .asciiz "\n"

.text
.globl main

main:
    li $t0, 1          # start value = 1
    li $t1, 10         # limit = 10

loop:
    # print current value of $t0
    li $v0, 1
    move $a0, $t0
    syscall

    # print newline
    li $v0, 4
    la $a0, newline
    syscall

    addi $t0, $t0, 2   # increment by 2
    ble $t0, $t1, loop # loop if $t0 <= 10

# exit
    li $v0, 10
    syscall
