# practica 2. Principio de computadoras
# OBJETIVO: introduce el codigo necesario para reproducir el comportamiento del programa
# C++ que se adjunta como comentarios
# Debes documentar debidamente el uso de los registros que has elegido y la correspondencia
# con las variables que has utilizado.

#     int numero,cifra,suma;
#     do {
#         std::cout << "Introduzca un entero para calcular la suma de sus cifras (0 para salir): ";
#         std::cin >> numero;
#		  if (numero == 0) break;
#         if (numero < 0 ) numero = 0 - numero; 
#         suma = 0;
#         while ( numero != 0 ){
#             cifra = numero % 10;
#             suma += cifra;
#             numero /= 10;
#         }
#         std::cout << "La suma de las cifras es " << suma << std::endl;
#     } while (true);
#     std::cout << "FIN DEL PROGRAMA. " << std::endl;
#     return 0;
# }

	.data		# directiva que indica la zona de datos
titulo: 	.asciiz	"\nSuma las cifras de un nÃºmero entero. Introduzca un 0 para salir del programa.\n "
msgnumero:	.asciiz	"\n\nIntroduzca un entero para calcular la suma de sus cifras (0 para salir): "

msgresultado1:	.asciiz	"\nLa suma de las cifras es  "
msgfin:			.asciiz "\nFIN DEL PROGRAMA."

	.text		# directiva que indica la zona de cÃ³digo
main:
# IMPRIME EL TITULO POR CONSOLA
#     std::cout << "Suma las cifras de un nÃºmero entero." << std::endl;
#     std::cout << "Introduzca un 0 para salir del programa." << std::endl;
	li	$v0, 4 # $v0 = 4 funcion print string 
  la	$a0,titulo  # $a0 = direccion a la cadena a imprimir
	syscall

#  int numero,cifra,suma;
#  int numero; numero -> $t0 no esta inicializado
#  int cifra; cifra -> $t1 no esta inicializado
#  int suma; suma -> $t2 no esta inicializado
 
  etiqueta_do:

# std::cout << "Introduzca un 0 para salir del programa." << std::endl;
    li $v0, 4 # $v0 = 4 funcion print string 
    la $a0, msgnumero # $a0 = direccion a la cadena a imprimir
    syscall
# std::cin >> numero;
    li $v0, 5
    syscall
    move $t0, $v0
    
# if (numero == 0) break;
    beq $t0, $zero, fin

# if (numero < 0 ) numero = 0 - numero;
    if:
      bge	$t0, $zero, ifFin	# (numero < 0 )   
      sub	$t0, $zero , $t0 # numero = 0 - numero
      j ifFin
    ifFin:
    
#  suma = 0;
    li $t2, 0

# while ( numero != 0 ){
    while:
      beq $t0, $zero, whileFin # ( numero != 0 )
      li $t3, 10         # cifra = numero % 10; -> almaceno 10
      div $t0, $t3       # cifra = numero % 10; -> numero % 10
      mfhi $t1           # cifra = numero % 10; -> almaceno cifra
      add $t2, $t2, $t1  # suma += cifra;
      div $t0, $t0, $t3   # numero /= 10;
      j while
    whileFin:

	#  std::cout << "La suma de las cifras es " << suma << std::endl;	
    la $a0, msgresultado1 # $a0 = direccion a la cadena a imprimir
    li $v0, 4 # $v0 = 4 funcion print string 
    syscall
    
    move $a0, $t2 # << suma <<
    li $v0, 1 
    syscall

	j etiqueta_do
	fin:
	# las siguientes instrucciones  imprimen la cadena de fin y finalizan el programa
	li $v0, 4 # $v0 = 4 funcion print string
	la $a0,msgfin  # $a0 = direccion a la cadena a imprimir
	syscall
	li $v0,10
	syscall

  
 
