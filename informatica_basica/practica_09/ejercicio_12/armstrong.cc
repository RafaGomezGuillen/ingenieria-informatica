/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Armstrong
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Un número de Armstrong es un número que es la suma de sus propios
 *        dígitos, cada uno de los cuales elevado al número de dígitos del
 * número.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include "armstrong.h"

#include <bits/stdc++.h>

#include <cstdlib>
#include <iostream>
using namespace std;

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    cout << argv[0] << ": Falta un número natural como parámetro" << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;
    exit(EXIT_SUCCESS);
  }
  string parameter{argv[1]};
  if (parameter == "--help") {
    cout << kHelpText << endl;
    exit(EXIT_SUCCESS);
  }
}

/** Funcion
 *
 *  @param[in] kNumero_narural. Numero natural a comprobar
 *  @return comprueba si es armstrong number
 */

int power(int x, unsigned int y) {
  if (y == 0) return 1;
  if (y % 2 == 0) return power(x, y / 2) * power(x, y / 2);
  return x * power(x, y / 2) * power(x, y / 2);
}

int order(int x) {
  int n = 0;
  while (x) {
    n++;
    x = x / 10;
  }
  return n;
}

bool Funcion_Armstrong(int x) {
  int n = order(x);
  int temp = x, sum = 0;
  while (temp) {
    int r = temp % 10;
    sum += power(r, n);
    temp = temp / 10;
  }
  return (sum == x);
}