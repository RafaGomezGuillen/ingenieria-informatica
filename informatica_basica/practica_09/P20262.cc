/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Maximum sums
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Escribe un programa que lea una secuencia de números e imprima la
 *        cantidad máxima que se puede obtener sumando números consecutivamente
 *        desde el principio, y la cantidad máxima que se puede obtener sumando
 * números consecutivamente desde el final.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
#include <vector>
using namespace std;

/*
 * @param int: La entrada consta de varios casos. Cada caso comienza con un
 * número n , seguido de n números enteros.
 * @return max_izq_der, max_der_izq: Para cada caso, imprima dos números: la
 * cantidad máxima que se puede obtener sumando cero o más números consecutivos
 * desde el principio, y la cantidad máxima que se puede obtener sumando cero o
 * más números consecutivos desde el final.
 */

int main() {
  int numero_natural,
      sequencia;  // numero natural para comprobar el tamañom de la sequencia
  while (cin >> numero_natural) {
    vector<int> vector_1(numero_natural);
    int max_izq_der = 0;  // Maximo izquierda-derecha
    int sum_izq_der = 0;  // Suma izquierda-derecha
    int max_der_izq = 0;  // Maximo derecha-izquierda
    int sum_der_izq = 0;  // Suma derecha-izquierda
    for (int i = 0; i < numero_natural; ++i) {
      cin >> sequencia;
      vector_1[i] = sequencia;
      sum_izq_der = sum_izq_der + sequencia;
      if (sum_izq_der > max_izq_der) max_izq_der = sum_izq_der;
    }
    for (int i = numero_natural - 1; i >= 0; --i) {
      sum_der_izq = sum_der_izq + vector_1[i];
      if (sum_der_izq > max_der_izq) max_der_izq = sum_der_izq;
    }
    cout << max_izq_der << ' ' << max_der_izq << endl;
  }
  return 0;
}