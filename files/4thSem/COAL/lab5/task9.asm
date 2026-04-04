.data
    arr: .word 12, 45, 23, 9
    max: .word 0
.text
.globl main
main:
    la $t0, arr
    lw $t2, 0($t0)
    li $t1, 1
loop:
    beq $t1, 4, end
    addi $t0, $t0, 4
    lw $t3, 0($t0)
    ble $t3, $t2, next
    move $t2, $t3
next:
    addi $t1, $t1, 1
    j loop
end:
    sw $t2, max
    li $v0, 10
    syscall
