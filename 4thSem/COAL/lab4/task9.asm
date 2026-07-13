.data
arr: .word 1, 2, 3, 4, 5
msg: .asciiz "Total Sum = "
.text
.globl main
main:
la $t0, arr
lw $t1, 0($t0)
lw $t2, 4($t0)
lw $t3, 8($t0)
lw $t4, 12($t0)
lw $t5, 16($t0)
add $s0, $t1, $t2
add $s0, $s0, $t3
add $s0, $s0, $t4
add $s0, $s0, $t5
li $v0, 4
la $a0, msg
syscall
li $v0, 1
move $a0, $s0
syscall
li $v0, 10
syscall