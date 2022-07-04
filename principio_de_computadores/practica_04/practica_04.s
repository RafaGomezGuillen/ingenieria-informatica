# // Imitar el comportamiento de la función numpy.arange().
# // El programa debe preguntar por 3 números flotantes: inicio, fin y paso.
# // A continuación sacará por pantalla una serie de números: inicio,
# // inicio+paso, inicio+2*paso, … hasta llegar a un número menor o igual de fin
# // (que no se mostrará).
# // El paso puede ser positivo o negativo, con lo que puede ocurrir que la serie
# // esté vacía (inicio <= fin y paso <=0, inicio >= fin y paso =>0)
# // en cuyo caso debe indicarse con un mensaje.
# // Una vez mostrado los valores de un rango se volverá a preguntar por otro
# // hasta que se produzca un rango vacío, momento en que terminará el programa.

# #include <iostream>

# int main() {
#   std::cout << "\nPR4: genera un rango\n";

#   while (true) {

#     float inicio; f1
#     std::cout << "\nIntroduce valor inicio: ";
#     std::cin >> inicio;

#     float fin; f2
#     std::cout << "Introduce valor fin: ";
#     std::cin >> fin;

#     float paso; f3
#     std::cout << "Introduce valor paso: ";
#     std::cin >> paso;

#     if (
#         ((inicio <= fin) && (paso <= 0.0))
#         || ((inicio >= fin) && (paso >= 0.0))
#     ) {
#       std::cout << "\nSerie vacía\n";
#       break;
#     }
#     if (paso > 0.0) {
#       do {
#         std::cout << inicio << "\n";
#         inicio += paso;
#       } while (inicio < fin);
#     } else {
#       do {
#         std::cout << inicio << "\n";
#         inicio += paso;
#       } while (inicio > fin);
#     }
#   }

#   std::cout << "\nTermina el programa\n";
# }
  .data
titulo: .asciiz "\nPR4: genera un rango\n"
inicio: .asciiz "\nIntroduce valor inicio: "
fin: .asciiz "Introduce valor fin: "
paso: .asciiz "Introduce valor paso: "
serie: .asciiz "\nSerie vacía\n"
inicio2: .asciiz "\n"
fin_programa: .asciiz "\nTermina el programa\n"
  .text
main:
# std::cout << "\nPR4: genera un rango\n";
li $v0, 4
la $a0, titulo
syscall
while:
#     float inicio; -> $f1
#     std::cout << "\nIntroduce valor inicio: ";
li $v0, 4
la $a0, inicio
syscall
#     std::cin >> inicio;
li $v0, 6
syscall
mov.s $f1, $f0
#     float fin; -> $f2
#     std::cout << "Introduce valor fin: ";
li $v0, 4
la $a0, fin
syscall
#     std::cin >> fin;
li $v0, 6
syscall
mov.s $f2, $f0
#     float paso; -> $f3
#     std::cout << "Introduce valor paso: ";
li $v0, 4
la $a0, paso
syscall
#     std::cin >> paso;
li $v0, 6
syscall
mov.s $f3, $f0
li.s $f4, 0.0
if:
  c.le.s $f1, $f2
  c.le.s $f3, $f4
  bc1f if_fin
  c.le.s $f2, $f1
  c.le.s $f4, $f3
  bc1f if_fin
  # std::cout << "\nSerie vacía\n";
  li $v0, 4
  la $a0, serie
  syscall
  # ((inicio <= fin) && (paso <= 0.0))
  c.le.s $f1, $f2
  c.le.s $f3, $f4
  bc1t while_fin
  # || ((inicio >= fin) && (paso >= 0.0))
  c.le.s $f2, $f1
  c.le.s $f4, $f3
  bc1t while_fin
  j if
if_fin:
  if2:
    #     if (paso > 0.0) {
    c.le.s $f3, $f4
    bc1t else
      do:
        #         std::cout << inicio << "\n";
        mov.s $f12, $f1
        li $v0, 2
        syscall
        # "\n"
        li $v0, 4
        la $a0, inicio2
        syscall
        #         inicio += paso;
        add.s $f1, $f1, $f3
        #       } while (inicio < fin);
        c.lt.s $f1, $f2
        bc1t do
        c.lt.s $f1, $f2
        bc1f while_fin
        j do
      fin_do:
  else:
    do2:
        #         std::cout << inicio << "\n";
        mov.s $f12, $f1
        li $v0, 2
        syscall
        # "\n"
        li $v0, 4
        la $a0, inicio2
        syscall
        #         inicio += paso;
        add.s $f1, $f1, $f3
        #       } while (inicio > fin);
        c.lt.s $f2, $f1
        bc1t do2
        c.lt.s $f2, $f1
        bc1f while_fin
      j do2
    fi_do2:
  if_fin2:
j while
while_fin:
#   std::cout << "\nTermina el programa\n";
li $v0, 4
la $a0, fin_programa
syscall
li $v0, 10
