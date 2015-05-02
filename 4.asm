li $t0, 1
sw $t0, 4($sp)
li $t0, 0
sw $t0, 0($sp)
L0: nop
lw $t0, 0($sp)
li $t1, 5
slt $t0, $t0, $t1
sw $t0, 8($sp)
lw $t0, 8($sp)
beq $t0, 0, L1
lw $t0, 4($sp)
li $t1, 2
mul $t0, $t0, $t1
sw $t0, 12($sp)
lw $t0, 12($sp)
sw $t0, 4($sp)
lw $t0, 0($sp)
li $t1, 1
add $t0, $t0, $t1
sw $t0, 16($sp)
lw $t0, 16($sp)
sw $t0, 0($sp)
j L0
L1: nop
L2: nop
lw $t0, 4($sp)
li $t1, 1
sgt $t0, $t0, $t1
sw $t0, 20($sp)
lw $t0, 20($sp)
beq $t0, 0, L3
lw $t0, 4($sp)
li $t1, 1
sub $t0, $t0, $t1
sw $t0, 24($sp)
lw $t0, 24($sp)
sw $t0, 4($sp)
j L2
L3: nop
