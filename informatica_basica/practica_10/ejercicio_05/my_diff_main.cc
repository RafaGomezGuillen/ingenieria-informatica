/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa my_diff que sea una versión simplificada del
 *        comando diff de Linux. Si los ficheros de texto que se comparan son
 *        ideńticos, el programa escribirá un mensaje en pantalla indicándolo.
 * Si no fuera ese el caso el programa imprimirá en pantalla las líneas de texto
 * que son diferentes así como su número de línea dentro del fichero.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include <cstring>
#include <fstream>
#include <iostream>
#include <ostream>

#include "my_diff.h"
using namespace std;

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero1 (Fichero1.txt)
 * fichero2 (Fichero2.txt)
 */

int main(int argc, char* argv[]) {
  ifstream Fichero1;
  ifstream Fichero2;
  Fichero1.open(argv[1]);
  Fichero2.open(argv[2]);

  if (!Fichero1) {
    cerr << "No se puedo abrir el fichero1" << endl;
    return 1;
  }

  if (!Fichero2) {
    cerr << "No se puedo abrir el fichero2" << endl;
    return 1;
  }

  char string1[10000], string2[10000];
  int i = 0, error_count = 0;
  while (!Fichero1.eof()) {
    Fichero1.getline(string1, 10000);
    Fichero2.getline(string2, 10000);
    i++;
    if (strcmp(string1, string2) != 0) {
      cout << "linea " << i << endl;
      cout << " Fichero1: " << string1 << endl;
      cout << " Fichero2: " << string2 << endl;
      error_count++;
    }
  }
  if (error_count > 0) {
    cout << "Los ficheros son diferentes" << endl;
  } else {
    cout << "Los ficheros son identicos" << endl;
  }
  return 0;
}
