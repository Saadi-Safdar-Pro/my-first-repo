.data
m1: .asciiz "Before: "
m2: .asciiz " After: "
sp: .asciiz " "
.text
.globl main
main:
li $t0, 30
li $t1, 45
li $v0, 4
la $a0, m1
syscall
li $v0, 1
move $a0, $t0
syscall
li $v0, 4
la $a0, sp
syscall
li $v0, 1
move $a0, $t1
syscall
move $t2, $t0
move $t0, $t1
move $t1, $t2
li $v0, 4
la $a0, m2
syscall
li $v0, 1
move $a0, $t0
syscall
li $v0, 4
la $a0, sp
syscall
li $v0, 1
move $a0, $t1
syscall
li $v0, 10
syscall