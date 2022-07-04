/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Desarrolle en C++ un programa cripto.cc cuya finalidad será encriptar
 *        y/o desencriptar ficheros de texto.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include "cripto.h"

#include <fstream>
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
  if (argc != 3) {
    cout << argv[0]
         << "Modo de uso: ./cripto fichero_entrada fichero_salida método "
            "password operación"
         << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;
    exit(EXIT_FAILURE);
  }
  string parameter{argv[1]};
  if (parameter == "--help") {
    cout << kHelpText << endl;
    exit(EXIT_FAILURE);
  }
}
