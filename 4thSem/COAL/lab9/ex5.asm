loop:
    addi $t0, $t0, 1       # increment counter

    beq $t0, 3, special    # if $t0 == 3, go to special

    li $t1, 10             # normal case
    j continue

special:
    li $t1, 99             # special case when $t0 = 3

continue:
    bne $t0, 5, loop       # loop until $t0 == 5
