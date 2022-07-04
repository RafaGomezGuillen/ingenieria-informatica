/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: I-th (1)
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that, given an integer number i and a sequence of
 * natural numbers x1, …, xn, prints xi.
 */
#include <iostream>
using namespace std;

int main() {
  int numero, sequencia, posicion = 1;
  // cout << "Introduza la posicion del numero de la sequencia: ";
  cin >> numero;
  while (cin >> sequencia && posicion != numero && sequencia != -1) {
    ++posicion;
  }
  cout << "At the position " << numero << " there is a(n) " << sequencia << "."
       << endl;
}