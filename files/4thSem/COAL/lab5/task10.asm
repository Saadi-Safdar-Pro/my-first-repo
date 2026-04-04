.data
    arr: .word 1, 2, 3, 4
    rev: .word 0, 0, 0, 0
.text
.globl main
main:
    la $t0, arr
    la $t1, rev
    addi $t0, $t0, 12
    li $t2, 0
loop:
    beq $t2, 4, end
    lw $t3, 0($t0)
    sw $t3, 0($t1)
    addi $t0, $t0, -4
    addi $t1, $t1, 4
    addi $t2, $t2, 1
    j loop
end:
    li $v0, 10
    syscall
