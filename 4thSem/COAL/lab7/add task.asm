.data
msg: .asciiz "AND Result: "

.text
main:
    li $t0, 12          # 1100
    li $t1, 10          # 1010

    and $t2, $t0, $t1   # 1000 = 8

    li $v0, 4
    la $a0, msg
    syscall

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 10
    syscall