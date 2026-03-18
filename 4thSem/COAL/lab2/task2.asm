.data
    prompt: .asciiz "Enter a number for Factorial: "
    result: .asciiz "Factorial is: "

.text
main:
    li $v0, 4            # Prompt user
    la $a0, prompt
    syscall
    li $v0, 5            # Read integer
    syscall
    move $t0, $v0        # n = input

    li $t1, 1            # product = 1
loop:
    blez $t0, end_fact   # if n <= 0, exit loop
    mul $t1, $t1, $t0    # product = product * n
    addi $t0, $t0, -1    # n = n - 1
    j loop

end_fact:
    li $v0, 4            # Print Label
    la $a0, result
    syscall
    li $v0, 1            # Print Result
    move $a0, $t1
    syscall

    li $v0, 10
    syscall