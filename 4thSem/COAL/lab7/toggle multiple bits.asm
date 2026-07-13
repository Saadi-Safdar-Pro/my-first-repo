.data
num:  .word 5
mask: .word 3

.text
.globl main
main:
    lw $t0, num
    lw $t1, mask

    xor $t2, $t0, $t1