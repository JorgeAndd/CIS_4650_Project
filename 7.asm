L0: nop
lw $t0, 4($sp)
li $t1, 10
slt $t0, $t0, $t1
sw $t0, 8($sp)
lw $t0, 8($sp)
beq $t0, 0, L1
j L0
L1: nop
li $t0, 3
sub $t0, $zero, $t0
sw $t0, 12($sp)
lw $t0, 12($sp)
sw $t0, 0($sp)
