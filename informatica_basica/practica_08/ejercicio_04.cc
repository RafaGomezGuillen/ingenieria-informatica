/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Looking for an a
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that reads a sequence of characters ended in a dot and
 * tells if the sequence has any lowercase ‘a’ or not.
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string frase;
  bool
  getline(cin, frase);

  if (frase.find("a") < frase.length()) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }

  return 0;
}
