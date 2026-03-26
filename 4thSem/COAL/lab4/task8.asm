.data
arr: .word 3, 6, 9, 12, 15
sp: .asciiz " "
.text
.globl main
main:
la $t0, arr
li $t1, 0
loop:
beq $t1, 5, exit
lw $a0, 0($t0)
li $v0, 1
syscall
li $v0, 4
la $a0, sp
syscall
addi $t0, $t0, 4
addi $t1, $t1, 1
j loop
exit:
li $v0, 10
syscall