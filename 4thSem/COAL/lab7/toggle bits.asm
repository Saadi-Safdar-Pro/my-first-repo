.data
num:    .word 5

.text
.globl main
main:
    lw $t0, num             # load number into $t0

    nor $t1, $t0, $zero     # $t1 = NOT($t0)

    # result is now in $t1