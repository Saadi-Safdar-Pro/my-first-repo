.data
    n1: .word 20
    n2: .word 30
    sum: .word 0
.text
.globl main
main:
    lw $t0, n1
    lw $t1, n2
    add $t2, $t0, $t1
    sw $t2, sum
    li $v0, 10
    syscall