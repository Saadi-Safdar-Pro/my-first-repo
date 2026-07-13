.text
main:
    li $t0, 2
loop:
    bgt $t0, 20, exit
    
    li $v0, 1
    move $a0, $t0
    syscall
    
    addi $t0, $t0, 2
    j loop
exit:
    li $v0, 10
    syscall