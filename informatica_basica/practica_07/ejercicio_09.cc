/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio:  Counting a's (1)
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that reads a sequence of characters ended with a
 * period and prints the number of letters ‘a’ in the sequence.
 */
#include <cstring>
#include <iostream>
using namespace std;

int main() {
  string frase;
  getline(cin, frase);

  const int KLongitudFrase = frase.length();
  int numero_de_letras{0};

  for (int i = 0; i <= KLongitudFrase; i++) {
    if (frase[i] == 'a') {
      numero_de_letras++;
    }
  }
  cout << numero_de_letras << endl;
  return 0;
}