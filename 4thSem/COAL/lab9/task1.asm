.data
msg: .asciiz "Countdown Finished"

.text
.globl main
main:
    li $t0, 10         # counter = 10
    li $t1, 0          # limit = 0

loop:
    addi $t0, $t0, -1  # counter--
    bne $t0, $t1, loop # if counter != 0 -> repeat loop

end:
    li $v0, 4
    la $a0, msg
    syscall

    li $v0, 10
    syscall
