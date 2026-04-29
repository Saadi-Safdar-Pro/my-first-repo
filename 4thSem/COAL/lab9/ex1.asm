.data
msg: .asciiz "Loop Finished"

.text
.globl main
main:
    li $t0, 1          
    li $t1, 10         

loop:
    addi $t0, $t0, 1   
    bne $t0, $t1, loop 

# exit section
end:
    li $v0, 4          
    la $a0, msg
    syscall

    li $v0, 10         
    syscall
