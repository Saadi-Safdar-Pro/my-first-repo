.data
msg: .asciiz "Sum = "
.text
.globl main
main:
li $t0, 5
li $t1, 10
li $t2, 15
move $s0, $t0
move $s1, $t1
move $s2, $t2
add $t3, $s0, $s1
add $t4, $t3, $s2
li $v0, 4
la $a0, msg
syscall
li $v0, 1
move $a0, $t4
syscall
li $v0, 10
syscall