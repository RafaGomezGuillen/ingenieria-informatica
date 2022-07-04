/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Desarrolle un programa que copie un fichero de texto en otro añadiendo
 *        al principio de cada línea el número de la misma. Ambos ficheros serán
 *        idénticos salvo que el de salida contiene al principio de cada línea
 * el número de la misma.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include <fstream>
#include <iostream>

#include "cp_fichero.h"
using namespace std;

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero (Fichero.txt)
 */

int main(int argc, char* argv[]) {
  string linea;
  int i = 1;
  ifstream Fichero;
  ofstream Fichero_Copiado("Fichero_copiado.txt");
  Fichero.open(argv[1]);

  if (Fichero_Copiado.is_open()) {
    if (Fichero.is_open()) {
      while (getline(Fichero, linea)) {
        Fichero_Copiado << (i++) << " " << linea << endl;
      }
    } else {
      cerr << "No se ha podido abrir Fichero.txt" << endl;
    }
  } else {
    cerr << "No se ha podido abrir Fichero_copiado.txt" << endl;
  }
  return 0;
}
