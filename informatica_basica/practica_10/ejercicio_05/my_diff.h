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
    "Este prgrama hace qie si los ficheros de texto que se comparan son "
    "ideńticos, el programa escribirá un mensaje en pantalla indicándolo. Si "
    "no fuera ese el caso el programa imprimirá en pantalla las líneas de "
    "texto que son diferentes así como su número de línea dentro del fichero.";

void Usage(int argc, char *argv[]);
