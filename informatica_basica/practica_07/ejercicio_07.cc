/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Intervals (1)
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that, given two intervals, computes the interval
 * corresponding to their intersection, or tells that it is empty.
 */

#include <iostream>
using namespace std;

void FuncionRango(int a, int b, int c, int d) {
  if (c > b and c > a)
    cout << "["
         << "]" << endl;
  else if (c < a and d < a)
    cout << "[]" << endl;
  else if (a >= c) {
    if (b >= d) {
      cout << "[" << a << "," << d << "]" << endl;
    } else {
      cout << "[" << a << "," << b << "]" << endl;
    }
  } else {
    if (b >= d)
      cout << "[" << c << "," << d << "]" << endl;
    else
      cout << "[" << c << "," << b << "]" << endl;
  }
}
int main() {
  int numero1, numero2, numero3, numero4;
  cin >> numero1 >> numero2 >> numero3 >> numero4;  // Introduzca los cuatro numeros
  FuncionRango(numero1, numero2, numero3, numero4);
  return 0;
}