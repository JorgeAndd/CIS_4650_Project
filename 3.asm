li $t0, 1
sw $t0, 8($sp)
lw $t0, 8($sp)
sw $t0, 4($sp)
lw $t0, 4($sp)
sw $t0, 0($sp)
lw $t0, 0($sp)
li $t1, 1
seq $t0, $t0, $t1
sw $t0, 12($sp)
lw $t0, 12($sp)
beq $t0, 0, L0
li $t0, 2
sw $t0, 0($sp)
L0: nop
lw $t0, 4($sp)
li $t1, 2
seq $t0, $t0, $t1
sw $t0, 16($sp)
lw $t0, 16($sp)
beq $t0, 0, L1
li $t0, 2
sw $t0, 4($sp)
j L2
L1: nop
li $t0, 3
sw $t0, 4($sp)
L2: nop
lw $t0, 0($sp)
li $t1, 1
seq $t0, $t0, $t1
sw $t0, 20($sp)
lw $t0, 4($sp)
li $t1, 2
seq $t0, $t0, $t1
sw $t0, 24($sp)
lw $t0, 20($sp)
lw $t1, 24($sp)
and $t0, $t0, $t1
sw $t0, 28($sp)
lw $t0, 8($sp)
li $t1, 2
seq $t0, $t0, $t1
sw $t0, 32($sp)
lw $t0, 28($sp)
lw $t1, 32($sp)
or $t0, $t0, $t1
sw $t0, 36($sp)
lw $t0, 36($sp)
beq $t0, 0, L3
li $t0, 4
sw $t0, 4($sp)
L3: nop
lw $t0, 0($sp)
li $t1, 2
seq $t0, $t0, $t1
sw $t0, 40($sp)
lw $t0, 4($sp)
li $t1, 2
seq $t0, $t0, $t1
sw $t0, 44($sp)
lw $t0, 40($sp)
lw $t1, 44($sp)
or $t0, $t0, $t1
sw $t0, 48($sp)
lw $t0, 48($sp)
beq $t0, 0, L4
li $t0, 5
sw $t0, 4($sp)
L4: nop
lw $t0, 8($sp)
li $t1, 2
seq $t0, $t0, $t1
sw $t0, 52($sp)
lw $t0, 52($sp)
seq $t0, $t0, 0
sw $t0, 56($sp)
lw $t0, 56($sp)
beq $t0, 0, L5
li $t0, 3
sw $t0, 8($sp)
L5: nop
