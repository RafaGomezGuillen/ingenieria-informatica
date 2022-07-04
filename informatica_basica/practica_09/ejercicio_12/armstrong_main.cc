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

#include <cstdlib>
#include <iostream>

#include "armstrong.h"
using namespace std;

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  string Numero_natural = argv[1];
  const int kNumero_natural = stoi(Numero_natural);
  bool flag;  // booleano para comprobar si es Armstrong nomber
  flag = Funcion_Armstrong(kNumero_natural);
  if (flag == true) {
    cout << kNumero_natural << " is an Armstrong number" << endl;
  } else {
    cout << kNumero_natural << " is not an Armstrong number" << endl;
  }
  return 0;
}
