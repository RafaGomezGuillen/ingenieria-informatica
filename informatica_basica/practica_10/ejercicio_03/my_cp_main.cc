/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa my_cp que se comporte como una versión
          simplificada del comando cp de linux copiando un fichero de texto en
          otro.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <cstdlib>  /// exit
#include <fstream>  // For the file streams
#include <iostream>
#include <string>

#include "my_cp.h"
using namespace std;

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero (Fichero.txt)
 */

int main(int argc, char* argv[]) {
  string linea;
  ifstream Fichero;
  ofstream Fichero_Copiado("Fichero_copiado.txt");
  Fichero.open(argv[1]);

  if (Fichero_Copiado.is_open()) {
    if (Fichero.is_open()) {
      while (getline(Fichero, linea)) {
        Fichero_Copiado << linea << endl;
      }
    } else {
      cerr << "No se ha podido abrir Fichero.txt" << endl;
    }
  } else {
    cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
  }
  return 0;
}

