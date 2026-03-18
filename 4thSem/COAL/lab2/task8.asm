.data
    str: .space 20
    prompt: .asciiz "Enter word: "
    res: .asciiz "Reversed: "

.text
main:
    li $v0, 4            # Prompt
    la $a0, prompt
    syscall
    li $v0, 8            # Read string
    la $a0, str
    li $a1, 20
    syscall

    li $v0, 4
    la $a0, res
    syscall

    la $t0, str
find_end:
    lb $t1, ($t0)
    beq $t1, 10, start_rev # stop at newline
    beq $t1, $zero, start_rev
    addi $t0, $t0, 1
    j find_end

start_rev:
    addi $t0, $t0, -1
rev_loop:
    la $t1, str
    blt $t0, $t1, end_prog
    li $v0, 11           # Print Char
    lb $a0, ($t0)
    syscall
    addi $t0, $t0, -1
    j rev_loop

end_prog:
    li $v0, 10
    syscall