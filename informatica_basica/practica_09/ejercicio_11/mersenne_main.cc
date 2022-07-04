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
 *        muestre como salida los primeros N primos de Mersenne
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */
#include <iostream>
#include <algorithm>

#include "mersenne.h"
using namespace std;

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  string Numero_natural = argv[1];
  const int kNumero_natural = stoi(Numero_natural);
  Funcion_Mersenne(kNumero_natural);
  
  return 0;
}
