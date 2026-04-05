.data
    arr: .word 1, 2, 3, 4, 5
.text
.globl main
main:
    la $t0, arr
    li $t1, 0
loop:
    beq $t1, 5, end
    lw $a0, 0($t0)
    li $v0, 1
    syscall
    addi $t0, $t0, 4
    addi $t1, $t1, 1
    j loop
end:
    li $v0, 10
    syscall