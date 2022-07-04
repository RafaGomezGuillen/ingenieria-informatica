	.data
size = 4
nF1:		.word	4
nC1:		.word	5
mat1:
		.float	18.92, 16.25, -8.03, -7.72, 27.76
		.float	29.43, 21.56,  9.61, 23.01,  7.05
		.float	17.56, 14.68, 18.12, 17.5 , 19.61
		.float	-1.12, 17.29, 22.44,  8.61, -6.07

nF2:		.word	2
nC2:		.word	10
mat2:
	.float	20.25, -7.8 , 11.11, 13.86, -8.97, 15.38, -1.67, -4.15, 23.08, 29.83
	.float	2.9 ,  5.98,  0.23,  7.17, -2.4 , 22.05, 20.6 ,  4.9 , 19.71, -0.06


strSepar:	.asciiz	"  "
strSalta:	.asciiz	"\n"
strTitulo:	.asciiz	"Desplaza filas matriz\n"
strMenu:	.asciiz	"\n0 - salir del programa\n1 - Trabajar en matriz 1\n2 - Trabajar en matriz 2\n\nElija opcion: "
strIncorrecta:	.asciiz	"Opción incorrecta\n"
strInicial:	.asciiz	"\nMatriz inicial\n"
strDesplazada:	.asciiz	"\nMatriz una vez desplazada\n"
strTermina:	.asciiz	"Termina el programa\n"
  .text
OpcionIncorrecta:
  # imprimo opcion incorrecta
  li $v0, 4
  la $a0, strIncorrecta
  syscall
  j doWhile

print_matrix:
  move $s2, $a0 # paso como argumento la direccion de memoria de la matriz
  move $s0, $a1 # paso como argumento el numero de filas
  move $s1, $a2 # paso como argumento el numero de columnas

  addi $sp, $sp, -16
  sw $ra, 12($sp)
  sw $s2, 8($sp)
  sw $s1, 4($sp)
  sw $s0, 0($sp)
  
  move $t0, $zero # $t0 = i
  bucle1:
    move $t1, $zero # t1 = j
    
    # Salto de linea
    la $a0, strSalta
    li $v0, 4
    syscall
  bucle2:
    mul $t2, $t0, $s1 # t2 = i * ncol
    addu $t2, $t2, $t1 # t2 = i * ncol + j
    mul $t2, $t2, 4 # t2 = (i * ncol + j) * size elementos
    addu $t2, $t2, $s2 # t2 = direccion de memoria de la matriz
    
    l.s $f12, 0($t2) # imprimo la matriz
    li $v0, 2
    syscall
    
    # Espacio entre lineas
    la $a0, strSepar
    li $v0, 4
    syscall
    
    addi $t1, $t1, 1 # j++
    blt $t1, $s1, bucle2
    addi $t0, $t0, 1 # j++
    blt $t0, $s0, bucle1  
    
    lw $s0, 0($sp)
    lw $s1, 4($sp)
    lw $s2, 8($sp)
    lw $ra, 12($sp)
    addi $sp, $sp, -16
    
    jr $ra

desplaza_vector:   
  move $s2, $a0 # paso como argumento la direccion de memoria de la matriz
  move $s3, $a1 # paso como argumento el numero de elementos del vector

  move $t0, $zero # i = t0
  move $t1, $zero # j = t1
  sub $t1, $s3, 1 # t1 = n - 1

  while:
    beq $t0, $t1, whileFin

    mul $t2, $t0, 4 # t2 contiene la direccion relativa
    addu $t2, $s2, $t2 # t2 contiene la direccion del elemento
    lw $t3, 0($t2) # t3 contiene el elemento

    mul $t4, $t1, 4 # t4 contiene la direccion relativa
    addu $t4, $s2, $t4 # t4 contiene la direccion del elemento
    lw $t5, 0($t4) # t5 contiene el elemento

    # intercambio
    sw $t3, 0($t4)
    sw $t5, 0($t2)

    addi $t0, $t0, 1
    b while
  whileFin: jr $ra

desplaza_matriz:
  move $s2, $a0 # paso como argumento la direccion de memoria de la matriz
  move $s0, $a1 # paso como argumento el numero de filas
  move $s1, $a2 # paso como argumento el numero de columnas

  mult	$s0, $s1 # filas * columnas = numero de elementos
  mflo	$s3	# numero de elementos = s3

  addi $sp,$sp,-4 # reservo 4 bytes en la pila
  sw $ra,0($sp) # guardo $ra
  
  move $t0, $zero #inicilizacion i = 0
  bucle6: bge $t0, $s0, bucle6_fin # salimos si i >= nfil
    move $t1, $zero  # j = 0
    bucle7: bge $t1, $s1, bucle7_fin # salimos si j >= ncol
      mul $t2, $t0, $s1 # t2 = i * ncol
      addu $t2, $t2, $t1 # t2 = i * ncol + j
      mul $t2, $t2, 4 # t2 = (i * ncol + j) * size elementos
      addu $t2, $t2, $s2 # t2 = direccion de memoria de la matriz
      lw $t3, 0($t2)
      l.s $f12, 0($t2) # imprimo la matriz
      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s3 # paso como argumento el numero de elementos del vector
      jal desplaza_vector
      addi $t1,$t1,1  # j++
      b bucle7   # vuelve a bucle7
    bucle7_fin: 
    addi $t0,$t0,1  # i++
    b bucle6   # vuelve a bucle6
  bucle6_fin:

  move $a0,$zero  # $a0 = 0
  move $a1,$zero  # $a1 = 0 
  lw $ra,0($sp)   # recupero $ra de pila
  addi $sp,$sp,4  # dejo puntero de plia como estaba
  jr $ra


main:
  # imprimo titulo
  li $v0, 4
  la $a0, strTitulo
  syscall

  doWhile:
    # Salto de linea
    la $a0, strSalta
    li $v0, 4
    syscall
    # imprimo menu
    li $v0, 4
    la $a0, strMenu
    syscall

    li $v0, 5 # leo opcion = t0
    syscall
    move $t0, $v0

    beq $t0, $zero, doWhileFin # si opcion == 0 termina el programa

    bgt $zero, $t0, OpcionIncorrecta # si 0 > opcion imprimo opcion incorrecta
    bgt $t0, 2, OpcionIncorrecta # si 3 < opcion imprimo opcion incorrecta
    

    beq $t0, 1, Opcion1
    beq $t0, 2, Opcion2

    Opcion1:
      bne $t0, 1, Opcion1Fin
      lw $s0, nF1 # s0 = nfil
      lw $s1, nC1 # s1 = ncol
      la $s2, mat1 # s2 = matriz1

      # Matriz inicial:
      la $a0, strInicial
      li $v0, 4
      syscall

      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s0 # paso como argumento el numero de filas
      move $a2, $s1 # paso como argumento el numero de columnas
      jal print_matrix

      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s0 # paso como argumento el numero de filas
      move $a2, $s1 # paso como argumento el numero de columnas
      jal desplaza_matriz

      # Matriz desplazada:
      la $a0, strDesplazada
      li $v0, 4
      syscall

      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s0 # paso como argumento el numero de filas
      move $a2, $s1 # paso como argumento el numero de columnas
      jal print_matrix
    Opcion1Fin:

    Opcion2:
      bne $t0, 2, Opcion2Fin
      lw $s0, nF2 # s0 = nfil
      lw $s1, nC2 # s1 = ncol
      la $s2, mat2 # s2 = matriz1

      # Matriz inicial:
      la $a0, strInicial
      li $v0, 4
      syscall

      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s0 # paso como argumento el numero de filas
      move $a2, $s1 # paso como argumento el numero de columnas
      jal print_matrix

      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s0 # paso como argumento el numero de filas
      move $a2, $s1 # paso como argumento el numero de columnas
      jal desplaza_matriz

      # Matriz desplazada:
      la $a0, strDesplazada
      li $v0, 4
      syscall

      move $a0, $s2 # paso como argumento la direccion de memoria de la matriz
      move $a1, $s0 # paso como argumento el numero de filas
      move $a2, $s1 # paso como argumento el numero de columnas
      jal print_matrix
    Opcion2Fin:
    
    b doWhile
  doWhileFin:

  # imprimo termina el programa
  li $v0, 4
  la $a0, strTermina
  syscall
  li $v0, 10
  syscall
