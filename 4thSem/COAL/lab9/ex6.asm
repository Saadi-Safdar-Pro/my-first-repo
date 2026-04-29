.data
msg: .asciiz "Square = "

.text
.globl main

main:
    li $a0, 4           # number to square
    jal square          # call procedure

    # print message
    li $v0, 4
    la $a0, msg
    syscall

    # print result
    move $a0, $v0
    li $v0, 1
    syscall

    # exit
    li $v0, 10
    syscall

# -------- Procedure --------
square:
    mul $v0, $a0, $a0   # compute square
    jr $ra              # return to caller
