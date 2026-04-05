.data
    var_a: .word 12
    var_b: .word 4
    res_s: .word 0
    res_d: .word 0
    res_p: .word 0
.text
.globl main
main:
    lw $t0, var_a
    lw $t1, var_b
    add $t2, $t0, $t1
    sw $t2, res_s
    sub $t2, $t0, $t1
    sw $t2, res_d
    mul $t2, $t0, $t1
    sw $t2, res_p
    li $v0, 10
    syscall