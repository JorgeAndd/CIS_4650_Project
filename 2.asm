li $t0, 1
sw $t0, 0($sp)
li $t0, 2
sw $t0, 4($sp)
li $t0, 3
sw $t0, 8($sp)
li $t0, 1
lw $t1, 4($sp)
add $t0, $t0, $t1
sw $t0, 12($sp)
lw $t0, 8($sp)
li $t1, 2
mul $t0, $t0, $t1
sw $t0, 16($sp)
lw $t0, 16($sp)
lw $t1, 8($sp)
div $t0, $t0, $t1
sw $t0, 20($sp)
lw $t0, 12($sp)
lw $t1, 20($sp)
sub $t0, $t0, $t1
sw $t0, 24($sp)
lw $t0, 24($sp)
li $t1, 5
add $t0, $t0, $t1
sw $t0, 28($sp)
lw $t0, 28($sp)
sw $t0, 0($sp)
