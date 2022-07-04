/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Triangle
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that, given a number n, prints a “triangle of size n”.
 */

#include <iostream>
using namespace std;

void func_triangulo(int n) {
  for (int i = 1; i <= n; i++) {    // filas
    for (int j = 1; j <= i; j++) {  // columnas
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int triangulo;
  cout << "";  // Introduzca el size del trinagulo
  cin >> triangulo;
  func_triangulo(triangulo);

  return 0;
}