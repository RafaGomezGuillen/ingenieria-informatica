/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Increasing pairs
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief  Escribe un programa que lea secuencias de números naturales, y que
 *         para cada uno imprima el número de pares de números consecutivos de
 * manera que el segundo número del par sea mayor que el primero.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */
#include <iostream>
using namespace std;

/*
 * @param int: La entrada consta de un número natural n , seguido de n
 * secuencias de números naturales estrictamente positivos. Cada secuencia
 * termina con un cero.
 * @return cont: Para cada secuencia, imprima en una línea el número de pares de
 * números consecutivos de modo que el segundo número del par sea mayor que el
 * primero.
 */

int main() {
  int n;
  cin >> n;  // numero natural "n"
  for (int i = 1; i <= n; ++i) {
    int cont = 0;
    int a, b;
    cin >> a;  // sequencia de numeros naturales positivos
    while (a > 0) {
      cin >> b;
      if (a < b) ++cont;
      a = b;
    }
    cout << cont << endl;
  }
  return 0;
}