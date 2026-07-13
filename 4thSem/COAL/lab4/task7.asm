.data
arr: .word 4, 8, 12, 16, 20
sp: .asciiz " "
.text
.globl main
main:
la $t0, arr
lw $a0, 0($t0)
li $v0, 1
syscall
li $v0, 4
la $a0, sp
syscall
lw $a0, 4($t0)
li $v0, 1
syscall
li $v0, 4
la $a0, sp
syscall
lw $a0, 8($t0)
li $v0, 1
syscall
li $v0, 10
syscall