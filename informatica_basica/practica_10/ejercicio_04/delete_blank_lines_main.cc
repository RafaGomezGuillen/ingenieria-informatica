/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa delete_blank_lines que elimine de un fichero de
 *        texto que tomará como entrada las líneas en blanco.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include <fstream>
#include <iostream>
#include <string>

#include "delete_blank_lines.h"
using namespace std;

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero (Fichero.txt)
 */

int main(int argc, char* argv[]) {
  string linea;
  ifstream Fichero;
  ofstream Fichero_sin_lineas("Fichero_sin_lineas.txt");
  Fichero.open(argv[1]);

  if (Fichero_sin_lineas.is_open()) {
    if (Fichero.is_open()) {
      while (getline(Fichero, linea)) {
        while (linea.length() == 0) getline(Fichero, linea);
        Fichero_sin_lineas << linea << endl;
      }
    } else {
      cerr << "No se ha podido abrir Fichero.txt" << endl;
    }
  } else {
    cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
  }
  return 0;
}
