/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Three words
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that reads three words a, b and c, and prints a line
 * with c, b and a in this order.
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string palabra1, palabra2, palabra3;
  // cout << "Introduzca tres palabras a invertir: ";
  cin >> palabra1;
  cin >> palabra2;
  cin >> palabra3;
  cout << palabra3 << " " << palabra2 << " " << palabra1 << endl;
  return 0;
}
