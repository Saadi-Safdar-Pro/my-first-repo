.data
    arr: .word 5, 10, 15, 20
.text
.globl main
main:
    la $t0, arr
    lw $a0, 0($t0)
    li $v0, 1
    syscall
    lw $a0, 8($t0)
    li $v0, 1
    syscall
    li $v0, 10
    syscall