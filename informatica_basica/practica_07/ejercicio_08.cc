/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: sum of digitis
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that reads several numbers and prints the sum of the
 * digits of each one.
 */
#include <cstring>
#include <iostream>
using namespace std;

int FuncionSuma1(int num1) {
  int suma = 0;
  while (num1 > 0) {
    suma = suma + num1 % 10;
    num1 = num1 / 10;
  }
  return suma;
}

int main() {
  int numero1;

  while (cin >> numero1) {
    cout << "The sum of the digits of " << numero1 << " is " << FuncionSuma1(numero1) << "." << endl;
  }
  return 0;
}
