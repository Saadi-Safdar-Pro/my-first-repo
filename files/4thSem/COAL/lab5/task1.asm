.data
    val: .word 10
    res: .word 0
.text
.globl main
main:
    lw $t0, val
    addi $t0, $t0, 15
    sw $t0, res
    li $v0, 10
    syscall