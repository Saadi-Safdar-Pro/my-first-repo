.data
    msg: .asciiz "The larger number is: "

.text
main:
    li $v0, 5            # Read int 1
    syscall
    move $t0, $v0
    li $v0, 5            # Read int 2
    syscall
    move $t1, $v0

    li $v0, 4
    la $a0, msg
    syscall

    bgt $t0, $t1, first_bigger
    move $a0, $t1        # $t1 is bigger
    j print_res
first_bigger:
    move $a0, $t0        # $t0 is bigger
print_res:
    li $v0, 1
    syscall

    li $v0, 10
    syscall