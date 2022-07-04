/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Mersenne
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Desarrolle un programa que tome por línea de comandos un número N y
 *        muestre como salida los primeros N primos de Mersenne.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include "mersenne.h"

#include <algorithm>
#include <cstdlib>
#include <iostream>

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

/** Genera los mersenne numbers anteriores del numero natural introducido
 *
 *  @param[in] kNumero_narural. Numero natural para ver los anteriores mersenne
 * numbers
 *  @return Genera lo dicho anteriormente
 */

void generatePrimes(bool *primes, int n) {
  fill(primes, primes + n + 1, true);
  for (int p = 2; p * p <= n; ++p) {
    if (primes[p] == true) {
      for (int i = p * 2; i <= n; i += p) {
        primes[i] = false;
      }
    }
  }
}
void Funcion_Mersenne(int n) {
  bool primes[n + 1];
  generatePrimes(primes, n);
  for (int i = 2; ((1 << i) - 1) <= n; ++i) {
    int num = (1 << i) - 1;
    if (primes[num]) {
      cout << num << " ";
    }
  }
  cout << endl;
}
