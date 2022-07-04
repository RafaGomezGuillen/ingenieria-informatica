# Nombre: Rafael Gomez Guillen
# Fecha: 04/05/2022
# Correo: alu0101462578@ull.edu.es   
# #include <iostream>
# using namespace std;

# int main() {
#   cout << "\nPractica 5 de Principios de Computadores. Matrices.\n";
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

#   for (int i = 0; i < nfil; i++) {
#     for (int j = 0; j < ncol; j++) {
#       int* ptElem = matriz + ncol * i + j;
#       cout << *ptElem << " ";
#     }
#     cout << "\n";
#   }
#   do {
#     int opcion = 1;
#     while (opcion != 0) {
#       cout << "\n(1) Cambiar dimensiones\n(2) Obtener elemento [i,j]\n"
#               "(3) Invertir fila\n(4) Invertir columna\n(0) Salir\nElija "
#               "opcion: ";
#       cin >> opcion;
#       if (opcion > 4) {
#         cout << "\nError: opcion incorrecta.\n";
#       }

#       if ((opcion == 1)) {
#         cout << "\nIntroduzca numero de filas: ";
#         cin >> nfil;

#         cout << "\nIntroduzca numero de columnas: ";
#         cin >> ncol;
#         if (((nfil * ncol) <= 400) && (nfil > 0) && (ncol > 0)) {
#           cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
#           for (int i = 0; i < nfil; i++) {
#             for (int j = 0; j < ncol; j++) {
#               int* ptElem = matriz + ncol * i + j;
#               cout << *ptElem << " ";
#             }
#             cout << "\n";
#           }
#         } else {
#           cout << "\nError: dimension incorrecta. Excede el maximo numero de "
#                   "elementos (400).\n";
#         }
#       }

#       if ((opcion == 2)) {
#         int i = 0;
#         int j = 0;
#         cout << "\nObtener el elemento [i,j]. Introduzca indice i (primera "
#                 "fila indice 0): ";
#         cin >> i;
#         cout << "\nObtener el elemento [i,j]. Introduzca indice j (primera "
#                 "columna indice 0): ";
#         cin >> j;
#         if ((i >= 0 and j >= 0) and (i < nfil and j < ncol)) {
#           int* ptElem = matriz + ncol * i + j;
#           cout << "\nElemento obtenido en la posicion indicada: " << *ptElem;
#         } else if ((i < 0) or (i >= nfil)) {
#           cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
#         } else if ((j < 0) or (j >= ncol)) {
#           cout << "\nError: dimension incorrecta. Numero de columna "
#                   "incorrecto.\n";
#         }
#       }
#       if (opcion == 3) {
#         cout << "\nInvertir la fila [i,*]. Introduzca indice i (primera fila "
#                 "indice 0): ";
#         int i = 0;
#         cin >> i;
#         if (i < nfil) {
#           int comienzo = 0;
#           int final = ncol - 1;
#           int* intecambio1 = matriz + ncol * i + comienzo;
#           int* intecambio2 = matriz + ncol * i + final;
#           while (comienzo < final) {
#             int aux = *intecambio1;
#             *intecambio1 = *intecambio2;
#             *intecambio2 = aux;
#             comienzo++;
#             final--;
#           }
#           for (int i = 0; i < nfil; i++) {
#             for (int j = 0; j < ncol; j++) {
#               int* ptElem = matriz + ncol * i + j;
#               cout << *ptElem << " ";
#             }
#             cout << "\n";
#           }
#         } else {
#           cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
#         }
#       }

#       if (opcion == 4) {
#         int j = 0;
#         cout << "\nInvertir la columna [*,j]. Introduzca indice j (primera "
#                 "columna indice 0): ";
#         cin >> j;
#         if (j < ncol) {
#           int comienzo = 0;
#           int final = nfil - 1;

#           while (comienzo < final) {
#             int* intecambio1 = matriz + ncol * comienzo + j;
#             int* intecambio2 = matriz + ncol * final + j;
#             int aux = *intecambio1;
#             *intecambio1 = *intecambio2;
#             *intecambio2 = aux;
#             comienzo++;
#             final--;
#           }
#           for (int i = 0; i < nfil; i++) {
#             for (int j = 0; j < ncol; j++) {
#               int* ptElem = matriz + ncol * i + j;
#               cout << *ptElem << " ";
#             }
#             cout << "\n";
#           }
#         } else {
#           cout << "\nError: dimension incorrecta. Numero de columna "
#                   "incorrecto.\n";
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
            .asciiz "(3) Invertir fila\n(4) Invertir columna\n(0) Salir\nElija opcion: "
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
titulo:     .asciiz "\nPractica 5 de Principios de Computadores. Matrices.\n"
header:     .asciiz "Matriz con dimension "
x:          .asciiz " x "
msg_fin:    .asciiz "\nFin del programa.\n"
    .text
main:
# Registros: 
# mat = $s1
# size = $t2
# nfil = $t3
# ncol = $t4
# i = $t0
# j = $t1
# opcion = $t7
# ptElem = $t6
# intercambio1 = $t6
# intercambio2 = $t9
# std::cout << "\nPractica 5 de Principios de Computadores. Matrices.\n";
  li $v0, 4
  la $a0, titulo
  syscall
  la $s1, mat # guardo en $s1 la direccion base de la matriz
  li $t2, size # $t2 contiene el tamaño de cada elemento
  la $t3, nfil # $t3 contiene las filaz de matriz
  la $t4, ncol # $t4 contiene las columas de la matriz
  # int nfil = 20, ncol = 10;
  li $t3, 20	# filas = 20
  li $t4, 10  # columnas = 10
  move $t0, $zero #inicilización i = 0
  move $t1, $zero #inicilización j = 0
  li $v0, 4
  la $a0, newline
  syscall
  li $t3, 20	# filas = 20
  li $t4, 10  # columnas = 10
  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
  li $v0, 4
  la $a0, header
  syscall
  # << nfil 
  move $a0, $t3
  li $v0, 1 
  syscall
  # << " x "
  li $v0, 4
  la $a0, x
  syscall
  # << ncol 
  move $a0, $t4
  li $v0, 1 
  syscall
  # << "\n";
  li $v0, 4
  la $a0, newline
  syscall           
  bucle1:
    move $t1, $zero
    # << "\n";
    li $v0, 4
    la $a0, newline
    syscall 
    bucle2:         
      # int* ptElem = matriz + ncol * i + j;
      mul $t6, $t0, $t4 # $t6 = i * ncol
      addu $t6, $t6, $t1 # $t6 = i * ncol + j
      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
      # cout << *ptElem 
      move $a0, $t6 
      li $v0, 1 
      syscall
      # << " ";
      li $v0, 4
      la $a0, separador
      syscall
      addi $t1, $t1, 1 # calculo la siguiente columna
      blt $t1, $t4, bucle2
      addi $t0, $t0, 1 # calculo la siguiente fila
      blt $t0, $t3, bucle1
    bucle2Fin:
  bucle1Fin:
  do:
    # int opcion = 1;
    li $t7, 1 
      while1:
        beqz $t7, while1Fin
        # cout << "\n(1) Cambiar dimensiones\n(2) Obtener elemento [i,j]\n"
        #     "(3) Invertir fila\n(4) Invertir columna\n(0) Salir\nElija "
        #     "opcion: ";
        li $v0, 4
        la $a0, menu
        syscall
        # cin >> opcion;
        li $v0, 5
        syscall
        move $t7, $v0
        # if ((opcion == 1)) 
        beq $t7, 1, if2
        # if ((opcion == 2))
        beq $t7, 2, if3
        # if ((opcion == 3))
        beq $t7, 3, if4
        # if ((opcion == 4))
        beq $t7, 4, if5
        # if (opcion == 0) break;
        beq $t7, $zero, doFin
        # if (opcion > 4) {
        #   cout << "\nError: opcion incorrecta.\n";
        # }
        ble $t7, 4, while1
          if1:
            # cout << "\nError: opcion incorrecta.\n";
            li $v0, 4
            la $a0, error_op
            syscall
          if1Fin:
          # if ((opcion == 1)) 
          if2:
            bne $t7, 1, if2Fin
            # cout << "\nIntroduzca numero de filas: ";
            li $v0, 4
            la $a0, msg_nfilas
            syscall
            # cin >> nfil;
            li $v0, 5
            syscall
            move $t3, $v0
            sgt $t8, $t3, $zero # (nfil > 0) = $t8
            bnez $t8, SeCumpleCondicion
            beqz $t8, if2_if2Else
            SeCumpleCondicion:   
            # cout << "\nIntroduzca numero de columnas: ";
            li $v0, 4
            la $a0, msg_ncols
            syscall
            # cin >> ncol;
            li $v0, 5
            syscall
            move $t4, $v0
            sgt $t9, $t4, $zero # (nfil > 0) = $t8
            bnez $t9, if2_if1 
            beqz $t9 if2_if3Else
              # if (((nfil * ncol) <= 400) && (nfil > 0) && (ncol > 0)) {
              if2_if1:
                li $s2, 400 # guardo los 400 elementos
                mul $s3, $t4, $t3 # multiplico filas por columnas y lo guardo en $s3
                sle $t5, $s3, $s2 # ((nfil * ncol) <= 400) = $t5
                sgt $t8, $t3, $zero # (nfil > 0) = $t8
                and $t5, $t5, $t8 # ((nfil * ncol) <= 400) && (nfil > 0) = $t5
                sgt $t9, $t4, $zero # (ncol > 0) = $t9
                and $t5, $t5, $t8 # (((nfil * ncol) <= 400) && (nfil > 0) && (ncol > 0)) = $t5
                bnez $t5, if2_if3ElseFin
                beqz $t5, if2_if1Else               
                if2_if1Else:
                  # if ((nfil * ncol) > 400)
                  # cout << "\nError: dimension incorrecta. Excede el maximo numero de "
                  #         "elementos (400).\n";
                  li $v0, 4
                  la $a0, error_dime
                  syscall
                  # int nfil = 20, ncol = 10;
                  li $t3, 20	# filas = 20
                  li $t4, 10  # columnas = 10
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  li $t3, 20	# filas = 20
                  li $t4, 10  # columnas = 10
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall  
                  bucle11:
                    move $t1, $zero
                    li $t3, 20	# filas = 20
                    li $t4, 10  # columnas = 10
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle22:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle22
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle11
                    bucle22Fin:
                  bucle11Fin:
                  j if2_if1Fin
                if2_if1ElseFin:
                if2_if2Else:
                  # if (nfil <= 0) 
                  # cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
                  li $v0, 4
                  la $a0, error_nfilas
                  syscall
                  # int nfil = 20, ncol = 10;
                  li $t3, 20	# filas = 20
                  li $t4, 10  # columnas = 10
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  li $t3, 20	# filas = 20
                  li $t4, 10  # columnas = 10
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall  
                  bucle12:
                    move $t1, $zero
                    li $t3, 20	# filas = 20
                    li $t4, 10  # columnas = 10
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle13:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle13
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle12
                    bucle13Fin:
                  bucle12Fin:
                  j if2_if1Fin				# jump to target
                if2_if2ElseFin:
                if2_if3Else: 
                  # if (ncol <= 0)  
                  # cout << "\nError: dimension incorrecta. Numero de columna incorrecto.\n";
                  li $v0, 4
                  la $a0, error_ncols
                  syscall
                  # int nfil = 20, ncol = 10;
                  li $t3, 20	# filas = 20
                  li $t4, 10  # columnas = 10
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  li $t3, 20	# filas = 20
                  li $t4, 10  # columnas = 10
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall  
                  bucle14:
                    move $t1, $zero
                    li $t3, 20	# filas = 20
                    li $t4, 10  # columnas = 10
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle15:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle15
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle14
                    bucle15Fin:
                  bucle14Fin:
                  j if2_if1Fin				# jump to target
                if2_if3ElseFin:
                # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                li $v0, 4
                la $a0, header
                syscall
                # << nfil 
                move $a0, $t3
                li $v0, 1 
                syscall
                # << " x "
                li $v0, 4
                la $a0, x
                syscall
                # << ncol 
                move $a0, $t4
                li $v0, 1 
                syscall
                # << "\n";
                li $v0, 4
                la $a0, newline
                syscall
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  bucle3:
                    move $t1, $zero
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                      bucle4:
                        # int* ptElem = matriz + ncol * i + j;
                        mul $t6, $t0, $t4 # $t6 = i * ncol
                        addu $t6, $t6, $t1 # $t6 = i * ncol + j
                        mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                        addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                        lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                        # cout << *ptElem 
                        move $a0, $t6 
                        li $v0, 1 
                        syscall
                        # << " ";
                        li $v0, 4
                        la $a0, separador
                        syscall
                        addi $t1, $t1, 1 # calculo la siguiente columna
                        blt $t1, $t4, bucle4
                        addi $t0, $t0, 1 # calculo la siguiente fila
                        blt $t0, $t3, bucle3
                      bucle4Fin:
                  bucle3Fin:
              if2_if1Fin:
          if2Fin:
          # if ((opcion == 2))
          move $t0, $zero #inicilización i = 0
          move $t1, $zero #inicilización j = 0 
          if3:
            bne $t7, 2, if3Fin
            # cout << "\nObtener el elemento [i,j]. Introduzca indice i (primera "
            #         "fila indice 0): ";
            li $v0, 4
            la $a0, msg_i
            syscall
            # cin >> i;
            li $v0, 5
            syscall         
            move $t0, $v0
            slt $t8, $t0, $zero # (i < 0) = $t8
            sge $t9, $t0, $t3 # (i >= nfil) = $t9
            or $t8, $t8, $t9
            bnez $t8, if3_if1Else
            beqz $t8, SeCumpleCondicion1
            SeCumpleCondicion1:   
            # cout << "\nObtener el elemento [i,j]. Introduzca indice j (primera "
            #         "columna indice 0): ";
            li $v0, 4
            la $a0, msg_j
            syscall
            # cin >> j;
            li $v0, 5
            syscall
            move $t1, $v0
            slt $t6, $t1, $zero # (j < 0) = $t6
            sge $t5, $t1, $t4 # (j >= ncol) = $t5
            or $t5 ,$t5, $t6
            bnez $t5, if3_if2Else 
            beqz $t5 if3_if1
              # if ((i >= 0 and j >= 0) and (i < nfil and j < ncol)) {
              if3_if1:
                sge $t8, $t0, $zero # (i >= 0) = $t8
                sge $t9, $t1, $zero # (j >= 0) = $t9
                and $t8, $t8, $t9 # ((i >= 0 and j >= 0) = $t8
                slt $t5, $t0, $t3 # (i < nfil) = $t5
                slt $t6, $t1, $t4 # (j < ncol) = $t6
                and $t5, $t5, $t6 # (i < nfil and j < ncol)) = $t5
                and $t5, $t5, $t8 # if ((i >= 0 and j >= 0) and (i < nfil and j < ncol)) = $t5
                bnez $t5, if3_if2ElseFin
                if3_if1Else: 
                  # if (i < 0) 
                  # cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
                  li $v0, 4
                  la $a0, error_nfilas
                  syscall
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall  
                  bucle16:
                    move $t1, $zero
                    # li $t3, 20	# filas = 20
                    # li $t4, 10  # columnas = 10
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle17:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle17
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle16
                    bucle17Fin:
                  bucle16Fin:
                  j	if3_if1Fin				# jump to target
                if3_if1ElseFin:
                if3_if2Else:
                  # if (j < 0)   
                  # cout << "\nError: dimension incorrecta. Numero de columna incorrecto.\n";
                  li $v0, 4
                  la $a0, error_ncols
                  syscall
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall  
                  bucle18:
                    move $t1, $zero
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle19:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle19
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle18
                    bucle19Fin:
                  bucle18Fin:
                  j	if3_if1Fin				# jump to target
                if3_if2ElseFin:                               
                # int* ptElem = matriz + ncol * i + j;
                mul $t6, $t0, $t4 # $t6 = i * ncol
                addu $t6, $t6, $t1 # $t6 = i * ncol + j
                mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                # cout << "\nElemento obtenido en la posicion indicada: " << *ptElem;
                li $v0, 4
                la $a0, msg_elemento
                syscall
                # << *ptElem; 
                move $a0, $t6 
                li $v0, 1 
                syscall
                # << "\n";
                li $v0, 4
                la $a0, newline
                syscall
                move $t0, $t3
                move $t1, $t4 
                # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                li $v0, 4
                la $a0, header
                syscall
                # << nfil 
                move $a0, $t3
                li $v0, 1 
                syscall
                # << " x "
                li $v0, 4
                la $a0, x
                syscall
                # << ncol 
                move $a0, $t4
                li $v0, 1 
                syscall
                # << "\n";
                li $v0, 4
                la $a0, newline
                syscall
                move $t0, $zero #inicilización i = 0
                bucle5:
                  move $t1, $zero
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall 
                  bucle6:         
                    # int* ptElem = matriz + ncol * i + j;
                    mul $t6, $t0, $t4 # $t6 = i * ncol
                    addu $t6, $t6, $t1 # $t6 = i * ncol + j
                    mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                    addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                    lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                    # cout << *ptElem 
                    move $a0, $t6 
                    li $v0, 1 
                    syscall
                    # << " ";
                    li $v0, 4
                    la $a0, separador
                    syscall
                    addi $t1, $t1, 1 # calculo la siguiente columna
                    blt $t1, $t4, bucle6
                    addi $t0, $t0, 1 # calculo la siguiente fila
                    blt $t0, $t3, bucle5
                  bucle6Fin:
                bucle5Fin:          
              if3_if1Fin:                          
          if3Fin:

          # if (opcion == 3) {
          if4:
            bne $t7, 3, if4Fin
            # cout << "\nInvertir la fila [i,*]. Introduzca indice i (primera fila "
            #         "indice 0): ";
            li $v0, 4
            la $a0, msg_f
            syscall
            move $t0, $zero #inicilización i = 0
            # cin >> i;
            li $v0, 5
            syscall    
            move $t0, $v0 
              if4_if1:
                sge $t8, $t0, $zero # (i >= 0) = $t8
                slt $t5, $t0, $t3 # (i < nfil) = $t5
                and $t5, $t5, $t8 # if ((i >= 0) and (i < nfil)) = $t5
                bnez $t5, if4_if1ElseFin
                beqz $t5, if4_if1Else              
                if4_if1Else:
                  # if ((i < 0) and (i >= nfil))
                  # cout << "\nError: dimension incorrecta. Numero de fila incorrecto.\n";
                  li $v0, 4
                  la $a0, error_nfilas
                  syscall
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall
                  bucle20:
                    move $t1, $zero
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle21:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle21
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle20
                    bucle21Fin:
                  bucle20Fin:
                  j	if4_if1Fin				# jump to target
                if4_if1ElseFin:
                # int comienzo = 0;
                move $s4, $zero
                # int final = ncol - 1;
                sub	$s5, $t4, 1
                move $t5, $zero
                move $t6, $zero
                move $t8, $zero
                move $t9, $zero
                while2:
                  bge	$s4, $s5, while2Fin	# if $s4 >= $s5 then while2Fin
                  # int* intecambio1 = matriz + ncol * j + comienzo;
                  mul $t5, $t0, $t4 # $t5 = i * ncol
                  addu $t5, $t5, $s4 # $t5 = j * ncol + comienzo
                  mul $t5, $t5, $t2 # $t5 = (j * ncol + comienzo) * size
                  addu $t5, $t5, $s1 # $t5 direccion de matriz [i,j]
                  lw $t6, 0($t5) # $t6 elemento de matriz [i,j]
                  # int* intecambio2 = matriz + ncol * j + final;
                  mul $t8, $t0, $t4 # $t8 = j * ncol
                  addu $t8, $t8, $s5 # $t8 = j * ncol + final
                  mul $t8, $t8, $t2 # $t8 = (j * ncol + final) * size
                  addu $t8, $t8, $s1 # $t8 direccion de matriz [i,j]
                  lw $t9, 0($t8) # $t8 elemento de matriz [i,j]
                  # intercambio
                  sw $t6, 0($t8)
                  sw $t9, 0($t5)
                  # comienzo++;
                  addi $s4, $s4, 1
                  # final--
                  addi $s5, $s5, -1
                  b while2
                while2Fin:
                # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                li $v0, 4
                la $a0, header
                syscall
                # << nfil 
                move $a0, $t3
                li $v0, 1 
                syscall
                # << " x "
                li $v0, 4
                la $a0, x
                syscall
                # << ncol 
                move $a0, $t4
                li $v0, 1 
                syscall
                # << "\n";
                li $v0, 4
                la $a0, newline
                syscall
                move $t0, $zero #inicilización i = 0
                bucle7:
                  move $t1, $zero #inicilización j = 0
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall 
                  bucle8:                    
                    # int* ptElem = matriz + ncol * i + j;
                    move $t6, $zero
                    mul $t6, $t0, $t4 # $t6 = i * ncol
                    addu $t6, $t6, $t1 # $t6 = i * ncol + j
                    mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                    addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                    lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                    # cout << *ptElem 
                    move $a0, $t6 
                    li $v0, 1 
                    syscall
                    # << " ";
                    li $v0, 4
                    la $a0, separador
                    syscall
                    addi $t1, $t1, 1 # calculo la siguiente columna
                    blt $t1, $t4, bucle8
                    addi $t0, $t0, 1 # calculo la siguiente fila
                    blt $t0, $t3, bucle7
                  bucle8Fin:
                bucle7Fin:
              if4_if1Fin:
          if4Fin:
          # if (opcion == 4) {
          if5:
            bne $t7, 4, if5Fin
            # cout << "\nInvertir la columna [*,j]. Introduzca indice j (primera "
            #         "columna indice 0): ";
            li $v0, 4
            la $a0, msg_c
            syscall
            move $t1, $zero #inicilización j = 0
            # cin >> j;
            li $v0, 5
            syscall    
            move $t1, $v0 
              if5_if1:
                sge $t8, $t1, $zero # (j >= 0) = $t8
                slt $t5, $t1, $t4 # (j < ncol) = $t5
                and $t5, $t5, $t8 # if ((j >= 0) and (j < ncol)) = $t5
                bnez $t5, if5_if1ElseFin
                beqz $t5, if5_if1Else 
                if5_if1Else:
                  # if ((j >= 0) and (j < ncol))  
                  # cout << "\nError: dimension incorrecta. Numero de columna "
                  #         "incorrecto.\n";
                  li $v0, 4
                  la $a0, error_ncols
                  syscall
                  move $t0, $zero #inicilización i = 0
                  move $t1, $zero #inicilización j = 0
                  li $v0, 4
                  la $a0, newline
                  syscall
                  # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                  li $v0, 4
                  la $a0, header
                  syscall
                  # << nfil 
                  move $a0, $t3
                  li $v0, 1 
                  syscall
                  # << " x "
                  li $v0, 4
                  la $a0, x
                  syscall
                  # << ncol 
                  move $a0, $t4
                  li $v0, 1 
                  syscall
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall
                  bucle23:
                    move $t1, $zero
                    # << "\n";
                    li $v0, 4
                    la $a0, newline
                    syscall 
                    bucle24:         
                      # int* ptElem = matriz + ncol * i + j;
                      mul $t6, $t0, $t4 # $t6 = i * ncol
                      addu $t6, $t6, $t1 # $t6 = i * ncol + j
                      mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                      addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                      lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                      # cout << *ptElem 
                      move $a0, $t6 
                      li $v0, 1 
                      syscall
                      # << " ";
                      li $v0, 4
                      la $a0, separador
                      syscall
                      addi $t1, $t1, 1 # calculo la siguiente columna
                      blt $t1, $t4, bucle24
                      addi $t0, $t0, 1 # calculo la siguiente fila
                      blt $t0, $t3, bucle23
                    bucle24Fin:
                  bucle23Fin:
                  j	if5_if1Fin				# jump to target
                if5_if1ElseFin:
                # int comienzo = 0;
                move $s4, $zero
                # int final = nfil - 1;
                move $s5, $zero
                sub	$s5, $t3, 1
                move $t5, $zero
                move $t6, $zero
                move $t8, $zero
                move $t9, $zero
                while3:
                  bge	$s4, $s5, while3Fin	# if $s4 >= $s5 then while3Fin
                  # int* intecambio1 = matriz + ncol * comienzo + j;
                  mul $t5, $t4, $s4 # $t5 =  ncol * comienzo 
                  addu $t5, $t5, $t1 # $t5 = ncol * comienzo + j
                  mul $t5, $t5, $t2 # $t5 = (ncol * comienzo + j) * size
                  addu $t5, $t5, $s1 # $t5 direccion de matriz [i,j]
                  lw $t6, 0($t5) # $t6 elemento de matriz [i,j]
                  # int* intecambio2 = matriz + ncol * final + j;
                  mul $t8, $t4, $s5 # $t8 = ncol * final
                  addu $t8, $t8, $t1 # $t8 = ncol * final + j
                  mul $t8, $t8, $t2 # $t8 = (ncol * final + j) * size
                  addu $t8, $t8, $s1 # $t8 direccion de matriz [i,j]
                  lw $t9, 0($t8) # $t8 elemento de matriz [i,j]
                  # intercambio
                  sw $t6, 0($t8)
                  sw $t9, 0($t5)
                  # comienzo++;
                  addi $s4, $s4, 1
                  # final--;
                  addi $s5, $s5, -1
                  b while3
                while3Fin:
                # << " ";
                li $v0, 4
                la $a0, newline
                syscall
                # cout << "Matriz con dimension " << nfil << " x " << ncol << "\n";
                li $v0, 4
                la $a0, header
                syscall
                # << nfil 
                move $a0, $t3
                li $v0, 1 
                syscall
                # << " x "
                li $v0, 4
                la $a0, x
                syscall
                # << ncol 
                move $a0, $t4
                li $v0, 1 
                syscall
                # << "\n";
                li $v0, 4
                la $a0, newline
                syscall
                move $t0, $zero #inicilización i = 0
                move $t1, $zero #inicilización j = 0
                bucle9:
                  move $t1, $zero
                  # << "\n";
                  li $v0, 4
                  la $a0, newline
                  syscall 
                  bucle10:         
                    # int* ptElem = matriz + ncol * i + j;
                    move $t6, $zero
                    mul $t6, $t0, $t4 # $t6 = i * ncol
                    addu $t6, $t6, $t1 # $t6 = i * ncol + j
                    mul $t6, $t6, $t2 # $t6 = (i * ncol + j) * size
                    addu $t6, $t6, $s1 # $t6 direccion de matriz [i,j]
                    lw $t6, 0($t6) # $t6 elemento de matriz [i,j]
                    # cout << *ptElem 
                    move $a0, $t6 
                    li $v0, 1 
                    syscall
                    # << " ";
                    li $v0, 4
                    la $a0, separador
                    syscall
                    addi $t1, $t1, 1 # calculo la siguiente columna
                    blt $t1, $t4, bucle10
                    addi $t0, $t0, 1 # calculo la siguiente fila
                    blt $t0, $t3, bucle9
                  bucle10Fin:
                bucle9Fin:
              if5_if1Fin:
          if5Fin:
        b while1
      while1Fin:
	b do
	doFin:
  # cout << "\nFin del programa.\n";
  li $v0, 4
  la $a0, msg_fin
  syscall
  li $v0, 10
  syscall
