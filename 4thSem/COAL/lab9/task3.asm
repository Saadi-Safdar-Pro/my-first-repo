.data
msg: .asciiz "Loop Finished"

.text
.globl main
main:
    li $t0, 1          # counter = 1
    li $t1, 10         # limit = 10

loop:
    addi $t0, $t0, 1   # counter++
    beq $t0, $t1, end  # if counter == 10 -> exit loop
    j loop             # otherwise keep looping

end:
    li $v0, 4
    la $a0, msg
    syscall

    li $v0, 10
    syscall
