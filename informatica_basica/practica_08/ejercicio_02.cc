/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Divisors in order
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program to print in order all the divisors of a given number.
 */

#include <iostream>
using namespace std;

void Funcion_Divisores(int n) {
  while (cin >> n) {
    cout << "divisors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
      if (n % i == 0) {
        cout << i << " ";
      }
    }
    cout << endl;
  }
}

int main() {
  int numero2{0};
  Funcion_Divisores(numero2);
  return 0;
}
