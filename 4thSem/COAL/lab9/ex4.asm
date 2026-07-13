li $t0, 4
li $t1, 7

bne $t0, $t1, notequal   # if $t0 != $t1, jump to 'notequal'

li $t2, 0                # skipped (since $t0 != $t1)
j end                    # jump to end

notequal:
    li $t2, 50

    beq $t2, 50, next    # if $t2 == 50, jump to 'next'
    j end

next:
    li $t3, 1

end:
    li $v0, 10           # exit syscall
    syscall
