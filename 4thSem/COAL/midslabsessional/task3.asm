.data
    orig_msg: .asciiz "Original Value: "
    res_msg:  .asciiz "\nResulting Value: "

.text
main:
    li $t0, 11
    
    li $v0, 4
    la $a0, orig_msg
    syscall

    li $v0, 1
    move $a0, $t0
    syscall

    xori $t1, $t0, 4     

    li $v0, 4
    la $a0, res_msg
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 10
    syscall