.data
msg: .asciiz "Saadi Safdar\n"

.text
.globl main

main:
    li $t0, 5

loop:
    beq $t0, $zero, end
    jal print_msg
    addi $t0, $t0, -1
    j loop

end:
    li $v0, 10
    syscall

print_msg:
    li $v0, 4
    la $a0, msg
    syscall
    jr $ra
