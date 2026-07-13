.data
msg: .asciiz "Loop Finished"

.text
.globl main
main:
    li $t0, 0          # counter = 0
    li $t1, 5          # limit = 5

loop:
    addi $t0, $t0, 1   # counter++
    bne $t0, $t1, loop # run until counter == 5

end:
    li $v0, 4
    la $a0, msg
    syscall

    li $v0, 10
    syscall
