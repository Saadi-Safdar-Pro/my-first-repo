.data
pr: .asciiz "Enter N: "
sp: .asciiz " "

.text
main:
    li $v0, 4
    la $a0, pr
    syscall

    li $v0, 5
    syscall
    move $s0, $v0

    blez $s0, end

    li $t1, 0
    li $t2, 1
    li $t3, 0

loop:
    beq $t3, $s0, end
    
    li $v0, 1
    move $a0, $t1
    syscall
    
    li $v0, 4
    la $a0, sp
    syscall

    add $t4, $t1, $t2
    move $t1, $t2
    move $t2, $t4
    
    addi $t3, $t3, 1
    j loop

end:
    li $v0, 10
    syscall