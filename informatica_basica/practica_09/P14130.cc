/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Equal to the last one
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Escriba un programa que lea una secuencia no vacía de números enteros,
 *        y dice cuántos de ellos son iguales al último.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
#include <vector>
using namespace std;

/*
 * @param int: La entrada consta de un número natural n > 0, seguido de n
 * números enteros.
 * @return contador: Imprime el número de elementos que son iguales al último,
 * este excluido.
 */

int Funcion_EqualToTheLastOne(int knumero_natural) {
  int sequencia;

  int aux = knumero_natural;
  vector<int> vector(knumero_natural);
  int contador = 0;

  int i = 0;
  while (knumero_natural != 0) {
    cin >> sequencia;  // Sequencia de numeros naturales ha comprobar
    --knumero_natural;
    vector[i] = sequencia;
    ++i;
  }

  for (int j = 0; j < aux - 1; ++j) {
    if (vector[j] == vector[aux - 1]) ++contador;
  }

  return contador;
}

int main() {
  int knumero_natural;  // numero natural para determinar el tamaño de la
                        // sequencia
  cin >> knumero_natural;

  cout << Funcion_EqualToTheLastOne(knumero_natural) << endl;
  return 0;
}