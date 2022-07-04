/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio:  The sequence of Collatz
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  For every n, print how many steps are needed to reach 1. Suppose that
 * this number is well defined, that is, that the conjecture of the statement is
 * true.
 */
#include <iostream>
using namespace std;
int lengthOfCollatzSequence(int num1) {
  int pasos = 0;
  while (num1 != 1) {
    if (num1 & 1) {
      num1 = 3 * num1 + 1;
    } else {
      num1 >>= 1;
    }
    pasos++;
  }
  return pasos;
}
int main() {
  int numero1;

  while (cin >> numero1) {
    cout << lengthOfCollatzSequence(numero1) << endl;
  }
  return 0;
}