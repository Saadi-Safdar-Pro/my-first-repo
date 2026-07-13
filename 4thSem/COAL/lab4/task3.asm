.data
nl: .asciiz "\n"
.text
.globl main
main:
li $t0, 25
move $t1, $t0
move $t2, $t0
li $v0, 1
move $a0, $t0
syscall
li $v0, 4
la $a0, nl
syscall
li $v0, 1
move $a0, $t1
syscall
li $v0, 4
la $a0, nl
syscall
li $v0, 1
move $a0, $t2
syscall
li $v0, 10
syscall