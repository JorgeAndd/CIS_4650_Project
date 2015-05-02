li $t0, 5
sw $t0, 0($sp)
li $t0, 0
sw $t0, 4($sp)
li $t0, 1
sw $t0, 8($sp)
li $t0, 0
sw $t0, 16($sp)
L0: nop
lw $t0, 16($sp)
lw $t1, 0($sp)
slt $t0, $t0, $t1
sw $t0, 20($sp)
lw $t0, 20($sp)
beq $t0, 0, L1
lw $t0, 16($sp)
li $t1, 1
sle $t0, $t0, $t1
sw $t0, 24($sp)
lw $t0, 24($sp)
beq $t0, 0, L2
lw $t0, 16($sp)
sw $t0, 12($sp)
j L3
L2: nop
lw $t0, 4($sp)
lw $t1, 8($sp)
add $t0, $t0, $t1
sw $t0, 28($sp)
lw $t0, 28($sp)
sw $t0, 12($sp)
lw $t0, 8($sp)
sw $t0, 4($sp)
lw $t0, 12($sp)
sw $t0, 8($sp)
L3: nop
lw $t0, 16($sp)
li $t1, 1
add $t0, $t0, $t1
sw $t0, 32($sp)
lw $t0, 32($sp)
sw $t0, 16($sp)
j L0
L1: nop
