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

#include "my_diff.h"

#include <fstream>
#include <iostream>
using namespace std;

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa de dos ficheros para su ejecución.
 *
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero1 (Fichero1.txt)
 * fichero2 (Fichero2.txt)
 */

void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    cout << argv[0] << ": Falta un fichero de texto como parametro" << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;
    exit(EXIT_FAILURE);
  }
  string parameter{argv[1]};
  if (parameter == "--help") {
    cout << kHelpText << endl;
    exit(EXIT_FAILURE);
  }
}
