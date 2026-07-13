.data
    number: .word 7
    msg: .asciiz "Updated value in memory: "

.text
main:
    lw $t0, number       # Load 7
    addi $t0, $t0, 5     # Add 5
    sw $t0, number       # Store 12 back to memory

    li $v0, 4
    la $a0, msg
    syscall
    li $v0, 1            # Print 12
    move $a0, $t0
    syscall

    li $v0, 10
    syscall