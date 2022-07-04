/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Maximum of each sequence
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Escriba un programa que lea secuencias de números enteros e imprima
 * 		  el valor máximo de cada secuencia.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */
#include <iostream>
using namespace std;

/*
 * @param int: La entrada contiene varias secuencias. Cada secuencia comienza
 * con su número de elementos n > 0, seguido de n números enteros.
 * @return maximo: Imprime el máximo de cada secuencia, una por línea.
 */

int main() {
  int numero_natural, sequecnia_1, sequencia, maximo;
  // Numero natural para determinar el tamaño de la sequencia
  while (cin >> numero_natural) {
    cin >> sequecnia_1;
    maximo = sequecnia_1;
    for (int i = 1; i < numero_natural; ++i) {
      cin >> sequencia;  // Sequecia a determinar el maximo
      if (sequencia > maximo) maximo = sequencia;
    }
    cout << maximo << endl;
  }
  return 0;
}