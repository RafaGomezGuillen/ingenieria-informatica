/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Counting frequences
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Escribe un programa que lee una sequencia de numeros naturales e
 *        imprime en pantalla, para cada uno, y cuantas veces aparece
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */
#include <iostream>
#include <vector>
using namespace std;

const int const_numero = 1000000000;

/*
 * @param int: La entrada consta de un número natural n , seguido de n números
 * naturales entre 1000000000 y 1000001000 (ambos incluidos).
 * @return vector_1[i]: Para cada número x que aparece en la secuencia, imprima
 * cuántas veces aparece.
 */

int Funcion_CountingFrequences(int numero_natural) {
  vector<int> vector_1(1001, 0);
  int i;
  for (int i = 0; i < numero_natural; ++i) {
    int sequencia;
    cin >> sequencia;
    ++vector_1[sequencia - const_numero];
  }

  for (int i = 0; i < 1001; ++i) {
    if (vector_1[i] != 0)
      cout << const_numero + i << " : " << vector_1[i] << endl;
  }
  return vector_1[i];
}

int main() {
  vector<int> vector_1(1001, 0);
  int numero_natural;  // numero natural
  cin >> numero_natural;
  cout << Funcion_CountingFrequences(numero_natural) << endl;
}