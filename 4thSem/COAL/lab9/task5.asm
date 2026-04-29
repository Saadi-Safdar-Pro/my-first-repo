.data
msg:    .asciiz "Square = "
num:    .word 0
result: .word 0

.text
.globl main

main:
    li $v0, 5          # read integer
    syscall
    sw $v0, num        # save input

    lw $a0, num        # load input
    jal square         # call procedure

    sw $v0, result     # save result

    li $v0, 4          # print message
    la $a0, msg
    syscall

    lw $a0, result     # load result
    li $v0, 1          # print integer
    syscall

    li $v0, 10         # exit
    syscall

square:
    mul $v0, $a0, $a0  # compute square
    jr $ra
