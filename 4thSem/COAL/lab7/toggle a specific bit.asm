.data
num: .word 5

.text
.globl main
main:
    lw $t0, num             # load number (5)

    li $t1, 1
    sll $t1, $t1, 2         # shift left by constant (2) -> mask = 4

    xor $t2, $t0, $t1       # toggle 2nd bit

    # result in $t2