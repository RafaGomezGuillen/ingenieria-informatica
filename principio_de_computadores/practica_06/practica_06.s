# NOMBRE : Rafael Gomez Guillen y ERIC ANGUETA ROGEL
# Fecha : 02/05/22
# #include <iostream>
# using namespace std;

# void swap(int* a, int* b) {
#   int temp = *a;
#   *a = *b;
#   *b = temp;
# }

# void printMatrix(int matriz[400], int nfil, int ncol) {
#   cout << "Matriz con dimension " << nfil << " x " << ncol << endl;
#   for (int i = 0; i < nfil; i++) {
#     for (int j = 0; j < ncol; j++) {
#       int* ptElem = matriz + ncol * i + j;
#       cout << *ptElem << " ";
#     }
#     cout << "\n";
#   }
# }

# void ObtenerElemento(int matriz[400], int i, int j, int ncol) {
#   int* ptElem = matriz + ncol * i + j;
#   cout << "\nElemento obtenido en la posicion indicada: " << *ptElem;
# }

# void InvertirFilas(int comienzo, int final_filas, int matriz[400]) {
#   const int ncol = final_filas + 1;
#   if (comienzo >= final_filas) {
#     return;
#   } else {
#     int i;
#     cin >> i;
#     int* intecambio1 = matriz + ncol * i + comienzo;
#     int* intecambio2 = matriz + ncol * i + final_filas;
#     swap(*intecambio1, *intecambio2);
#     InvertirFilas(comienzo + 1, final_filas - 1, matriz);
#   }
# }

# void InvertirColumnas(int comienzo, int final_columnas, int matriz[400]) {
#   const int ncol = final_columnas + 1;
#   if (comienzo >= final_columnas) {
#     return;
#   } else {
#     int j;
#     cin >> j;
#     int* intecambio1 = matriz + ncol * comienzo + j;
#     int* intecambio2 = matriz + ncol * final_columnas + j;
#     swap(*intecambio1, *intecambio2);
#     InvertirColumnas(comienzo + 1, final_columnas - 1, matriz);
#   }
# }
# void Traspuesta(int matriz[400], int nfil) {
#   int i, j;
#   int matriz_traspuesta[400];
#   for (i = 0; i < nfil; i++) {
#     for (j = 0; j < nfil; j++) {
#       int* ptElem1 = matriz_traspuesta + nfil * i + j;
#       int* ptElem = matriz + nfil * j + i;
#       *ptElem1 = *ptElem;
#     }
#   }
#   printMatrix(matriz_traspuesta, nfil, nfil);
# }

# int main() {
#   cout << "\nPractica 6 de Principios de Computadores. Matrices con "
#           "funciones.\n";
#   int nfil = 20, ncol = 10;
#   int matriz[400] = {
#       100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
#       115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129,
#       130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144,
#       145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159,
#       160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174,
#       175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189,
#       190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204,
#       205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219,
#       220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234,
#       235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
#       250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264,
#       265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279,
#       280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294,
#       295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309,
#       310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324,
#       325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339,
#       340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354,
#       355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 365, 366, 367, 368, 369,
#       370, 371, 372, 373, 374, 375, 376, 377, 378, 379, 380, 381, 382, 383, 384,
#       385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399,
#       400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414,
#       415, 416, 417, 418, 419, 420, 421, 422, 423, 424, 425, 426, 427, 428, 429,
#       430, 431, 432, 433, 434, 435, 436, 437, 438, 439, 440, 441, 442, 443, 444,
#       445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459,
#       460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474,
#       475, 476, 477, 478, 479, 480, 481, 482, 483, 484, 485, 486, 487, 488, 489,
#       490, 491, 492, 493, 494, 495, 496, 497, 498, 499};

#   printMatrix(matriz, nfil, ncol);
#   do {
#     int opcion = 1;
#     while (opcion != 0) {
#       cout << "\n(1) Cambiar dimensiones\n(2) Obtener elemento [i,j]\n"
#               "(3) Invertir fila\n(4) Invertir columna\n(5) Traspuesta\n(0) "
#               "Salir\nElija opcion: ";
#       cin >> opcion;
#       if (opcion > 5) {
#         cout << "\nError: opcion incorrecta.\n";
#       }

#       if ((opcion == 1)) {
#         cout << "\nIntroduzca numero de filas: ";
#         cin >> nfil;
#         cout << "\nIntroduzca numero de columnas: ";
#         cin >> ncol;
#         if (((nfil * ncol) <= 400) && (nfil > 0) && (ncol > 0)) {
#           printMatrix(matriz, nfil, ncol);
#         } else if ((nfil * ncol) > 400) {
#           nfil = 20, ncol = 10;
#           cout << "\nError: dimension incorrecta. Excede el maximo numero de "
#                   "elementos (400).\n";
#           printMatrix(matriz, nfil, ncol);
#         } else if ((ncol <= 0)) {
#           nfil = 20, ncol = 10;
#           cout << "\nError: dimension incorrecta. Numero de columna "
#                   "incorrecto.\n";
#           printMatrix(matriz, nfil, ncol);
#         } else if (nfil <= 0) {
#           nfil = 20, ncol = 10;
#           cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
#           printMatrix(matriz, nfil, ncol);
#         }
#       }

#       if ((opcion == 2)) {
#         int i, j;
#         cout << "\nObtener el elemento [i,j]. Introduzca indice i (primera "
#                 "fila indice 0): ";
#         cin >> i;
#         cout << "\nObtener el elemento [i,j]. Introduzca indice j (primera "
#                 "columna indice 0): ";
#         cin >> j;
#         if ((i >= 0 and j >= 0) and (i < nfil and j < ncol)) {
#           ObtenerElemento(matriz, i, j, ncol);
#         } else if ((i < 0) or (i >= nfil)) {
#           cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
#           printMatrix(matriz, nfil, ncol);
#         } else if ((j < 0) or (j >= ncol)) {
#           cout << "\nError: dimension incorrecta. Numero de columna "
#                   "incorrecto.\n";
#           printMatrix(matriz, nfil, ncol);
#         }
#       }

#       if ((opcion == 3)) {
#         cout << "\nInvertir la fila [i,*]. Introduzca indice i (primera fila "
#                 "indice 0): ";
#         int comienzo = 0;
#         int final_filas = ncol - 1;
#         InvertirFilas(comienzo, final_filas, matriz);
#         printMatrix(matriz, nfil, ncol);
#       }

#       if ((opcion == 4)) {
#         cout << "\nInvertir la columna [*,j]. Introduzca indice j (primera "
#                 "columna indice 0): ";
#         int comienzo = 0;
#         int final_Columnas = nfil - 1;
#         InvertirColumnas(comienzo, final_Columnas, matriz);
#         printMatrix(matriz, nfil, ncol);
#       }

#       if (opcion == 5) {
#         if (nfil == ncol) {
#           Traspuesta(matriz, nfil);
#         } else {
#           cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
#         }
#       }
#     }
#     if (opcion == 0) break;
#   } while (true);
#   cout << "\nFin del programa.\n";
# }
maximoElementos=400 # numero de enteros maximo reservado para la matriz 1600 bytes
size=4 # bytes que ocupa un entero
    .data
mat:   .word   100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119
       .word   120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139
       .word   140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159
       .word   160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179
       .word   180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199
       .word   200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219
       .word   220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239
       .word   240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259
       .word   260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279
       .word   280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299
       .word   300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319
       .word   320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339
       .word   340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359
       .word   360, 361, 362, 363, 364, 365, 366, 367, 368, 369, 370, 371, 372, 373, 374, 375, 376, 377, 378, 379
       .word   380, 381, 382, 383, 384, 385, 386, 387, 388, 389, 390, 391, 392, 393, 394, 395, 396, 397, 398, 399
       .word   400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 412, 413, 414, 415, 416, 417, 418, 419
       .word   420, 421, 422, 423, 424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 436, 437, 438, 439
       .word   440, 441, 442, 443, 444, 445, 446, 447, 448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459
       .word   460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 472, 473, 474, 475, 476, 477, 478, 479
       .word   480, 481, 482, 483, 484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 496, 497, 498, 499
       

nfil:   .word   20 # nuemro de filas de la matriz
ncol:   .word   10 # numero de columnas de la matriz
separador:  .asciiz "  " # separador entre numeros
newline:    .asciiz "\n"
menu:       .ascii  "\n(1) Cambiar dimensiones\n(2) Obtener elemento [i,j]\n"
            .asciiz "(3) Invertir fila\n(4) Invertir columna\n(5) Traspuesta\n(0) Salir\nElija opcion: "
error_op:   .asciiz "\nError: opcion incorrecta.\n"
msg_nfilas: .asciiz "\nIntroduzca numero de filas: "
msg_ncols:  .asciiz "\nIntroduzca numero de columnas: "
error_nfilas:   .asciiz "\nError: dimension incorrecta. Numero de fila incorrecto.\n"
error_ncols:    .asciiz "\nError: dimension incorrecta. Numero de columna incorrecto.\n"
error_dime:     .asciiz "\nError: dimension incorrecta. Excede el maximo numero de elementos (400).\n"
msg_i:      .asciiz "\nObtener el elemento [i,j]. Introduzca indice i (primera fila indice 0): "
msg_j:      .asciiz "\nObtener el elemento [i,j]. Introduzca indice j (primera columna indice 0): "
msg_f:      .asciiz "\nInvertir la fila [i,*]. Introduzca indice i (primera fila indice 0): "
msg_c:      .asciiz "\nInvertir la columna [*,j]. Introduzca indice j (primera columna indice 0): "
msg_elemento:   .asciiz "\nElemento obtenido en la posicion indicada: "
titulo:     .asciiz "\nPractica 6 de Principios de Computadores. Matrices con funciones.\n"
header:     .asciiz "Matriz con dimension "
x:          .asciiz " x "
msg_fin:    .asciiz "\nFin del programa.\n"
error_no_cuadrada:  .asciiz "\nError: No se puede calcular la traspuesta en matrices no cuadradas.\n"

    .text
## ========== REGISTROS ==========
##  nfil ->             $s0
##  ncol ->             $s1
##  maximoElementos ->  $s2
##  mat ->              $s3
##  size ->             $s4
##  comienzo ->         $s6
##  final_fila  ->      $s7
##  final_columna ->    $s8
##  i ->                $t0
##  j ->                $t1
##  nfil ->             $t0
##  ncol ->             $t1
## invertir ->          $t2
##  aux ->              $t3 
##  eleccion ->         $t4
##  aux2 ->             $t5
## ===============================

swap:   
  # push 
  addi $sp,$sp,-8 # reservo 8 bytes de pila
  sw $t3,4($sp)   # guardo $t3 en pila
  sw $t5,0($sp)   # guardo $t5 en pila
  # cargo los elementos 
  lw $t3,0($a0)      
  lw $t5,0($a1)      
  # guarda los valores 
  sw $t5,0($a0)   
  sw $t3,0($a1)   
  move $a0,$zero  # $a0 = 0
  move $a1,$zero  # $a1 = 0
  # pop pila
  lw $t5,0($sp)   # recupero $t1 de pila
  lw $t3,4($sp)   # recupero $t0 de pila
  addi $sp,$sp,8  # dejo puntero de plia como estaba
  jr $ra  

Traspuesta:
  move $s3, $a0 # paso como parametro la direccion base de la matriz
  move $s0, $a1 # paso como parametro las filas de la matriz
  addi $sp,$sp,-4 # reservo 4 bytes en la pila
  sw $ra,0($sp) # guardo $ra
  move $t0, $zero #inicilizacion i = 0
  bucle6: bge $t0, $s0, bucle6_fin # salimos si i >= nfil
    move $t1,$t0  # j = i
    bucle7: bge $t1, $s0, bucle7_fin # salimos si j >= nfil
      # int* ptElem = matriz + nfil * i + j;
      move $t3, $zero
      mul $t3, $t0, $s0 # $t3 = i * nfil
      addu $t3, $t3, $t1 # $t3 = i * nfil + j
      mul $t3, $t3, $s4 # $t3 = (i * nfil + j) * size
      addu $t3, $t3, $s3 # $t3 direccion de matriz [i,j]
      # int* ptElem = matriz + nfil * j + i;
      move $t5, $zero
      mul $t5, $t1, $s0 # $t5 = j * nfil
      addu $t5, $t5, $t0 # $t5 = i * nfil + i
      mul $t5, $t5, $s4 # $t5 = (i * nfil + j) * size
      addu $t5, $t5, $s3 # $t5 direccion de matriz [i,j]
      move $a0,$t3 # $a0 = $t3 
      move $a1,$t5 # $a1 = $t5 
      jal swap
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

## ========== INVERITR ==========
Invertir:
  move $s6, $a0 # paso como parametro la direccion base de la matriz # paso como parametro la direccion de memoria del primer elemento de la fila/columna (comienzo)
  move $s7, $a1 # paso como parametro numero de elementos que tiene la fila (final_filas)
  move $s8, $a1 # paso como parametro numero de elementos que tiene la columna (final_columna)
  move $s4, $a2 # paso como parametro numero de bytes existente entre un elemento
  # if opcion == 4 salta a columnas
  beq $t4, 4, Columnas
  Filas:
  blt $s6, $s7, notrivial_filas # if comienzo < final_filas salta notrivial_filas
  jr $ra
  notrivial_filas:
  # push
  addi $sp, $sp, -16 # reservo 16 bytes en la pila
  sw $ra, 12($sp) # guardo $ra
  sw $s7, 8($sp)  # guardo $s7
  sw $s6, 4($sp)  # guardo $s6
  sw $s4, 0($sp)  # guardo $s4
  # int* intecambio2 = matriz + ncol * i + final_filas;
  move $t3, $zero
  mul $t3, $t2, $s1 # $t3 = i * ncol
  addu $t3, $t3, $s7 # $t3 = i * ncol + final_filas
  mul $t3, $t3, $s4 # $t3 = (i * ncol + final_filas) * size
  addu $t3, $t3, $s3 # $t3 direccion de matriz [i,j]
  # int* intecambio1 = matriz + ncol * i + comienzo;
  move $t5, $zero
  mul $t5, $t2, $s1 # $t5 = i * ncol
  addu $t5, $t5, $s6 # $t5 = i * ncol + comienzo
  mul $t5, $t5, $s4 # $t5 = (i * ncol + comienzo) * size
  addu $t5, $t5, $s3 # $t5 direccion de matriz [i,j]
  move $a0,$t3 # $a0 = $t3 
  move $a1,$t5 # $a1 = $t5 
  jal swap
  # comienzo + 1;
  move $a0, $s6
  addi $a0, $a0, 1
  # final_filas - 1
  move $a1, $s7
  addi $a1, $a1, -1
  jal Invertir
  # pop
  lw $s4, 0($sp)  # recupero $s4 en el mismo orden
  lw $s6, 4($sp)  # recupero $s6 en el mismo orden
  lw $s7, 8($sp)  # recupero $s7 en el mismo orden
  lw $ra, 12($sp) # recupero $ra en el mismo orden
  addi $sp, $sp, 16 # dejo el puntero como estaba
  jr $ra
  Columnas:
  blt $s6, $s8, notrivial_columnas # if comienzo < final_columnas salta notrivial_columnas
  jr $ra
  notrivial_columnas:
  # push
  addi $sp, $sp, -16 # reservo 16 bytes en la pila
  sw $ra, 12($sp) # guardo $ra
  sw $s8, 8($sp)  # guardo $s8
  sw $s6, 4($sp)  # guardo $s6
  sw $s4, 0($sp)  # guardo $s4
  # int* intecambio2 = matriz + ncol * final_columnas + j;
  move $t3, $zero
  mul $t3, $s1, $s8 # $t3 = ncol * final_columnas
  addu $t3, $t3, $t2 # $t3 = ncol * final_columnas + j
  mul $t3, $t3, $s4 # $t3 = (i * ncol + final_filas) * size
  addu $t3, $t3, $s3 # $t3 direccion de matriz [i,j]
  # int* intecambio1 = matriz + ncol * comienzo + j;
  move $t5, $zero
  mul $t5, $s1, $s6 # $t5 =  ncol * comienzo 
  addu $t5, $t5, $t2 # $t5 = ncol * comienzo + j
  mul $t5, $t5, $s4 # $t5 = (i * ncol + comienzo) * size
  addu $t5, $t5, $s3 # $t5 direccion de matriz [i,j]
  move $a0,$t3 # $a0 = $t3 
  move $a1,$t5 # $a1 = $t5 
  jal swap 
  # comienzo + 1;
  move $a0, $s6
  addi $a0, $a0, 1
  # final_columnas - 1
  move $a1, $s8
  addi $a1, $a1, -1
  jal Invertir
  # pop
  lw $s4, 0($sp)  # recupero $s4 en el mismo orden
  lw $s6, 4($sp)  # recupero $s6 en el mismo orden
  lw $s8, 8($sp)  # recupero $s8 en el mismo orden
  lw $ra, 12($sp) # recupero $ra en el mismo orden
  addi $sp, $sp, 16 # dejo el puntero como estaba
  jr $ra

print_matriz:
  move $s3, $a0 # paso como parametro la direccion base de la matriz
  move $s0, $a1 # paso como parametro las filas de la matriz
  move $s1, $a2 # paso como parametro las columnas de la matriz
  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
  li $v0, 4
  la $a0, header
  syscall
  # << nfil 
  li $v0, 1
  move $a0, $s0
  syscall
  # << " x "
  li $v0, 4
  la $a0, x
  syscall
  # << ncol 
  li $v0, 1
  move $a0, $s1
  syscall
  # << "\n";
  li $v0, 4
  la $a0, newline
  syscall
  move    $t0, $zero  # t0 -> i 
  bucle_M1:
    bge $t0, $s0, fin_bucles
    move $t1, $zero      # t1 -> j
    bucle_M2:
      bge $t1, $s1, bucle_M2_fin
      # int* ptElem = matriz + ncol * i + j;
      move $t3, $zero      # t3 -> aux
      mul $t3, $t0, $s1   # aux = i * ncol
      addu $t3, $t3, $t1   # aux = aux + j
      mul $t3, $t3, $s4   # aux = aux * size
      addu $t3, $t3, $s3   # aux -> direccion de la matriz[i, j] 
      lw $t3, 0($t3)     # aux -> elemento de la matriz[i, j]
      # cout << *ptElem 
      li $v0, 1
      move $a0, $t3
      syscall
      # << " ";
      li $v0, 4
      la $a0, separador
      syscall
      addi $t1, $t1, 1 # calculo la siguiente columna
      b  bucle_M2
    bucle_M2_fin:
  # std::cout << std::endl;
  li $v0, 4
  la $a0, newline
  syscall
  addi $t0, $t0, 1
  b bucle_M1
  fin_bucles: jr $ra

## ========== MOSTRAR ERROR FILA ==========
error_fila:
  #  std::cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
  li $v0, 4
  la $a0, error_nfilas
  syscall
  #  Mostrar(nfil, ncol, matrix);
  move $a0, $s3 # paso como parametro la direccion base de la matriz
  move $a1, $s0 # paso como parametro las filas de la matriz
  move $a2, $s1 # paso como parametro las columnas de la matriz
  jal  print_matriz  
  b  do_while

## ========== MOSTRAR ERROR COLUMNA ==========
error_columna:
  #  std::cout << "\nError: dimension incorrecta. Numero de columna incorrecto.\n";
  li $v0, 4
  la $a0, error_ncols
  syscall
  #  Mostrar(nfil, ncol, matrix);
  move $a0, $s3 # paso como parametro la direccion base de la matriz
  move $a1, $s0 # paso como parametro las filas de la matriz
  move $a2, $s1 # paso como parametro las columnas de la matriz
  jal  print_matriz  
  b do_while

main:  
  la $s3, mat # guardo en $s3 la direccion base de la matriz
  li $s4, size # $s4 contiene el tamaño de cada elemento
  li $s2, maximoElementos # $s2 contiene el maximo numero de elementos (400)
  lw $s0, nfil # $s0 contiene las filaz de matriz
  lw $s1, ncol # $s1 contiene las columas de la matriz
  move $t3, $zero
  # std::cout << "\nPractica 6 de Principios de Computadores. Matrices con funciones.\n";
  li $v0, 4
  la $a0, titulo
  syscall
  # cout << endl;
  li $v0, 4
  la $a0, newline
  syscall
  # Mostrar(nfil, ncol, matrix);
  la $a0, mat # paso como parametro la direccion base de la matriz
  lw $a1, nfil # paso como parametro las filas de la matriz
  lw $a2, ncol # paso como parametro las columnas de la matriz
  jal print_matriz
  
  do_while:
    # std::cout << "\n(1) Cambiar dimensiones\n(2) Obtener elemento [i,j]\n(3) Invertir fila\n(4) Invertir columna\n(0) Salir\nElija opcion: \n";
    li $v0, 4
    la $a0, menu
    syscall
    # cin >> opcion;
    li $v0, 5
    syscall
    move $t4, $v0
    # switch(seleccion) :
    beqz $t4, case0
    bgt $t4, 5, ErrorOpcion
    bgt $zero, $t4, ErrorOpcion
    # if ((opcion == 1)) 
    beq $t4, 1, case1
    # if ((opcion == 2))
    beq $t4, 2, case2
    # if ((opcion == 3))
    beq $t4, 3, case3
    # if ((opcion == 4))
    beq $t4, 4, case4
    # if ((opcion == 5))
    beq $t4, 5, case5
    
    # if (opcion > 5 or opcion < 0)
    ErrorOpcion:
      # cout << "\nError: opcion incorrecta.\n";
      li $v0, 4
      la $a0, error_op
      syscall      
      b do_while

    # if (opcion == 0)
    case0:  
    b do_while_fin

    # if opcion == 1 
    case1:  
      # std::cout << "\nIntroduzca el numero de filas: ";
      li $v0, 4
      la $a0, msg_nfilas
      syscall
      # cin >> nfil;
      li $v0, 5
      syscall
      move $t0, $v0 # $t0 => nfil
      ble $t0, $zero, error_fila # si fila < 0 salta a error
      # std::cout << "\nIntroduzca el numero de columnas: ";
      li $v0, 4
      la $a0, msg_ncols
      syscall
      # cin >> ncol;
      li $v0, 5
      syscall
      move $t1, $v0 # $t1 => ncol
      ble $t1, $zero, error_columna # si columna < 0 salta a error
      # if (nfil * ncol <= 400) 
      if_case1:
        mul $t3, $t0, $t1 # multiplico filas por columnas y lo guardo en $t3
        bgt $t3, $s2, else_case1 # ((nfil * ncol) <= 400) salta a else_case1
        move $s0, $t0 # guardo $t0 en filas
        move $s1, $t1 # guardo $t1 en columnas
        # Mostrar(nfil, ncol, matrix);
        move $a0, $s3 # paso como parametro la direccion base de la matriz
        move $a1, $s0 # paso como parametro las filas de la matriz
        move $a2, $s1 # paso como parametro las columnas de la matriz
        jal print_matriz
        b do_while
      else_case1:
        # std::cout << "\nError: dimension incorrecta. Excede el maximo numero de elementos (400).\n"; 
        li $v0, 4
        la $a0, error_dime
        syscall
        # Mostrar(nfil, ncol, matrix);
        move $a0, $s3 # paso como parametro la direccion base de la matriz
        move $a1, $s0 # paso como parametro las filas de la matriz
        move $a2, $s1 # paso como parametro las columnas de la matriz
        jal print_matriz
        b do_while
            
    # if opcion == 2
    case2:
      # std::cout << "\nObtener el elemento [i,j]. Introduzca indice i (primera fila indice 0): ";
      li $v0, 4
      la $a0, msg_i
      syscall
      # cin >> i;
      li $v0, 5
      syscall
      move $t0, $v0 # $t0 => i
      # if (i >= nfil || i < 0) { 
      if_fil:
        blt $t0, $zero, error_fila
        blt $t0, $s0, else_fil
        # std::cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
        li $v0, 4
        la $a0, error_nfilas
        syscall
        # Mostrar(nfil, ncol, matrix);
        move $a0, $s3 # paso como parametro la direccion base de la matriz
        move $a1, $s0 # paso como parametro las filas de la matriz
        move $a2, $s1 # paso como parametro las columnas de la matriz
        jal print_matriz
        b do_while
      # } else {
      else_fil:
        # std::cout << "\nObtener el elemento [i,j]. Introduzca indice j (primera columna indice 0): ";
        li $v0, 4
        la $a0, msg_j
        syscall
        # std::cin >> j;
        li $v0, 5
        syscall
        move $t1, $v0 # $t1 => j
      # if (j >= ncol || j < 0) {
      if_col:
        blt $t1, $zero, error_columna
        blt $t1, $s1, else_col
        # std::cout << "\nError: dimension incorrecta. Numero de columna incorrecto.\n";
        li $v0, 4
        la $a0, error_ncols
        syscall
        # Mostrar(nfil, ncol, matrix);
        move $a0, $s3 # paso como parametro la direccion base de la matriz
        move $a1, $s0 # paso como parametro las filas de la matriz
        move $a2, $s1 # paso como parametro las columnas de la matriz
        jal print_matriz
        b do_while
      # } else {
      else_col:
        # std::cout << "\nElemento obtenido en la posicion indicada: ";
        li $v0, 4
        la $a0, msg_elemento
        syscall
        # std::cout << matrix[i * ncol + j];
        li $v0, 5
        mul $t3, $t0, $s1 # aux = i * ncol
        add $t3, $t3, $t1 # aux = aux + j
        mul $t3, $t3, $s4 # aux = aux * size
        addu $t3, $t3, $s3 # aux -> direccion de la matriz[i, j]
        lw $t3, 0($t3) # aux -> elemento de la matriz[i, j]
        li $v0, 1
        move $a0, $t3
        syscall
        # cout << endl;
        li $v0, 4
        la $a0, newline
        syscall
        # Mostrar(nfil, ncol, matrix);
        move $a0, $s3 # paso como parametro la direccion base de la matriz
        move $a1, $s0 # paso como parametro las filas de la matriz
        move $a2, $s1 # paso como parametro las columnas de la matriz
        jal print_matriz
        b do_while

    # if opcion == 3
    case3:
      # std::cout << "\nInvertir la fila [i,*]. Introduzca indice i (primera fila indice 0): ";
      li $v0, 4
      la $a0, msg_f
      syscall
      # std::cin >> invertir;
      li $v0, 5
      syscall
      move $t2, $v0
      # if (invertir >= nfil || invertir < 0) {
      # std::cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
      blt $t2, $zero, error_fila # si la i < 0
      bge $t2, $s0, error_fila # si i > nfil
      # int comienzo = 0
      move $s6, $zero
      # int final_filas = ncol - 1;
      move $s7, $zero
      sub $s7, $s1, 1   
      move $a0, $s6 # paso como parametro la direccion de memoria del primer elemento
      move $a1, $s7 # paso como parametro el numero de bytes de la fila
      move $a2, $s4 # paso como parametro el numero de bytes existente entre elementos
      jal Invertir   
      # Mostrar(nfil, ncol, matrix);
      move $a0, $s3 # paso como parametro la direccion base de la matriz
      move $a1, $s0 # paso como parametro las filas de la matriz
      move $a2, $s1 # paso como parametro las columnas de la matriz
      jal print_matriz
      b do_while 
    # if opcion == 4
    case4:
      # std::cout << "\nInvertir la columna [*,j]. Introduzca indice j (primera columna indice 0): ";
      li $v0, 4
      la $a0, msg_c
      syscall
      # std::cin >> invertir;
      li $v0, 5
      syscall
      move $t2, $v0 
      # if (invertir >= ncol || invertir < 0) {
      # std::cout << "\nError: dimension incorrecta. Numero de columna incorrecto.\n";
      # Mostrar(nfil, ncol, matrix);
      blt $t2, $zero, error_columna # si j < 0 
      bge $t2, $s1, error_columna # si j > ncol
      # int comienzo = 0
      move $s6, $zero
      # int final_filas = nfil - 1;
      move $s8, $zero
      sub $s8, $s0, 1
      move $a0, $s6 # paso como parametro la direccion de memoria del primer elemento
      move $a1, $s8 # paso como parametro el numero de bytes de la columna
      move $a2, $s4 # paso como parametro el numero de bytes existente entre elementos
      jal Invertir
      # Mostrar(nfil, ncol, matrix);
      move $a0, $s3 # paso como parametro la direccion base de la matriz
      move $a1, $s0 # paso como parametro las filas de la matriz
      move $a2, $s1 # paso como parametro las columnas de la matriz
      jal print_matriz
      b do_while        
    # if opcion == 5
    case5:
      if6_if1:
        seq $t7, $s0, $s1 # if (nfil == ncol) = $t7
        bnez $t7, if6_if1ElseFin
        beqz $t7, if6_if1Else              
        if6_if1Else:
          # if (nfil != ncol)
          # cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
          li $v0, 4
          la $a0, error_no_cuadrada
          syscall
          # Mostrar(nfil, ncol, matrix);
          move $a0, $s3 # paso como parametro la direccion base de la matriz
          move $a1, $s0 # paso como parametro las filas de la matriz
          move $a2, $s1 # paso como parametro las columnas de la matriz
          jal print_matriz
          j	if6_if1Fin  # salta a if6_if1Fin
          if6_if1ElseFin:
          move $a0, $s3 # paso como parametro la direccion base de la matriz
          move $a1, $s0 # paso como parametro las filas de la matriz
          jal Traspuesta
          move $a0, $s3 # paso como parametro la direccion base de la matriz
          move $a1, $s0 # paso como parametro las filas de la matriz
          move $a2, $s1 # paso como parametro las columnas de la matriz
          jal print_matriz
        if6_if1Fin:
      b do_while
  do_while_fin: 
  # std::cout << "\nFin del programa.\n";
  li $v0, 4
  la $a0, msg_fin
  syscall
  li $v0, 10
  syscall
