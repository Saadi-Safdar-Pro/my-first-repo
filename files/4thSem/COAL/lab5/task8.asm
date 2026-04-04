.data
    arr: .word 2, 4, 6
.text
.globl main
main:
    la $t0, arr
    li $t1, 0
loop:
    beq $t1, 3, end
    lw $t2, 0($t0)
    mul $t2, $t2, 10
    sw $t2, 0($t0)
    addi $t0, $t0, 4
    addi $t1, $t1, 1
    j loop
end:
    li $v0, 10
    syscall
