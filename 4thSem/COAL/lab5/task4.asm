.data
    num: .word 7
    sq:  .word 0
.text
.globl main
main:
    lw $t0, num
    mul $t1, $t0, $t0
    sw $t1, sq
    li $v0, 10
    syscall