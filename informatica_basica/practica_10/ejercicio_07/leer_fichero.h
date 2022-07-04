/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Este programa declara la "Help Text" constante y una funcion
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

const string kHelpText =
    "Este programa lee un fichero de texto que se pasa como parámetro y "
    "produce como salida ficheros con nombre A.txt, B.txt, ..., Z.txt.";

void Usage(int argc, char *argv[]);