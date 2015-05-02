li $t0, 1
sw $t0, 0($sp)
li $t0, 2
sw $t0, 4($sp)
li $t0, 3
sw $t0, 8($sp)
lw $t0, 4($sp)
lw $t1, 8($sp)
add $t0, $t0, $t1
sw $t0, 12($sp)
lw $t0, 12($sp)
sw $t0, 0($sp)
lw $t0, 4($sp)
lw $t1, 8($sp)
sub $t0, $t0, $t1
sw $t0, 16($sp)
lw $t0, 16($sp)
sw $t0, 0($sp)
lw $t0, 4($sp)
lw $t1, 8($sp)
mul $t0, $t0, $t1
sw $t0, 20($sp)
lw $t0, 20($sp)
sw $t0, 0($sp)
lw $t0, 4($sp)
lw $t1, 8($sp)
div $t0, $t0, $t1
sw $t0, 24($sp)
lw $t0, 24($sp)
sw $t0, 0($sp)
lw $t0, 8($sp)
lw $t1, 4($sp)
div $t0, $t1
mfhi $t0
sw $t0, 28($sp)
lw $t0, 28($sp)
sw $t0, 0($sp)
lw $t0, 4($sp)
li $t1, 1
add $t0, $t0, $t1
sw $t0, 32($sp)
lw $t0, 32($sp)
sw $t0, 0($sp)
li $t0, 1
lw $t1, 4($sp)
add $t0, $t0, $t1
sw $t0, 36($sp)
lw $t0, 36($sp)
sw $t0, 0($sp)
li $t0, 1
li $t1, 2
add $t0, $t0, $t1
sw $t0, 40($sp)
lw $t0, 40($sp)
sw $t0, 0($sp)
