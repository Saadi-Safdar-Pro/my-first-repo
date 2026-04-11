.data
    newline: .asciiz "\n"

.text
main:
    li $t0, 1
loop:
    bgt $t0, 10, exit
    
    li $v0, 1
    move $a0, $t0
    syscall
    
    li $v0, 4
    la $a0, newline
    syscall
    
    addi $t0, $t0, 1
    j loop
exit:
    li $v0, 10
    syscall