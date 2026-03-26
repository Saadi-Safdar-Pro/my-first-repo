.data
arr: .word 7, 14, 5, 20, 11
.text
.globl main
main:
la $t0, arr
lw $t1, 0($t0)
li $t2, 1
loop:
beq $t2, 5, end
addi $t0, $t0, 4
lw $t3, 0($t0)
ble $t3, $t1, skip
move $t1, $t3
skip:
addi $t2, $t2, 1
j loop
end:
li $v0, 1
move $a0, $t1
syscall
li $v0, 10
syscall