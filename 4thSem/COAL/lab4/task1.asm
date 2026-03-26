.data
res: .word 0
msg: .asciiz "Result = "
.text
.globl main
main:
li $t0, 14
li $t1, 6
move $t2, $t0
move $t3, $t1
add $t4, $t2, $t3
sw $t4, res
li $v0, 4
la $a0, msg
syscall
li $v0, 1
lw $a0, res
syscall
li $v0, 10
syscall