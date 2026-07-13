.data
m1: .asciiz "Add: "
m2: .asciiz "\nSub: "
m3: .asciiz "\nMul: "
.text
.globl main
main:
li $t0, 18
li $t1, 4
move $t2, $t0
move $t3, $t1
add $s0, $t2, $t3
sub $s1, $t2, $t3
mul $s2, $t2, $t3
li $v0, 4
la $a0, m1
syscall
li $v0, 1
move $a0, $s0
syscall
li $v0, 4
la $a0, m2
syscall
li $v0, 1
move $a0, $s1
syscall
li $v0, 4
la $a0, m3
syscall
li $v0, 1
move $a0, $s2
syscall
li $v0, 10
syscall