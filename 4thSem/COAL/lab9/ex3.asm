li $t0, 6
li $t1, 9

beq $t0, $t1, equal   # if $t0 == $t1, jump to 'equal'

li $t2, 0             # executed (since not equal)
j end                 # jump to end

equal:
    li $t2, 1         # skipped (because $t0 != $t1)

end:
