.data
res: .word 0
.text
.globl main
main:
li $t0, 9
move $t1, $t0
mul $t2, $t1, $t1
sw $t2, res
li $v0, 1
move $a0, $t2
syscall
li $v0, 10
syscall