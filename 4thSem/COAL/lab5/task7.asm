.data
    arr: .word 10, 20, 30
    res: .word 0
.text
.globl main
main:
    la $t0, arr
    li $t1, 0
    li $t2, 0
loop:
    beq $t1, 3, end
    lw $t3, 0($t0)
    add $t2, $t2, $t3
    addi $t0, $t0, 4
    addi $t1, $t1, 1
    j loop
end:
    sw $t2, res
    li $v0, 10
    syscall