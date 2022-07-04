/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa que imprima en pantalla la palabra con mayor
 *        número de vocales y la palabra con el mayor número de consonantes
 *        (independientemente de si se trata de mayúsculas o minúsculas) que se
 *        encuentren en el fichero de texto que se le pase como parámetro.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include "print_word.h"

#include <cstdlib>  /// exit
#include <fstream>  // For the file streams
#include <iostream>
using namespace std;

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa de un fichero para su ejecución.
 *
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero (Palabras.txt)
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
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
