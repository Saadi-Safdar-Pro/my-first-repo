.data
    prompt: .asciiz "Enter n: "
    msg: .asciiz "Sum is: "

.text
main:
    li $v0, 4
    la $a0, prompt
    syscall
    li $v0, 5
    syscall
    move $t0, $v0        # $t0 = n

    li $t1, 0            # sum = 0
    li $t2, 1            # counter = 1
sum_loop:
    bgt $t2, $t0, exit_sum
    add $t1, $t1, $t2
    addi $t2, $t2, 1
    j sum_loop

exit_sum:
    li $v0, 4
    la $a0, msg
    syscall
    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall