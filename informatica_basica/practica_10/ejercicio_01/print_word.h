/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Este programa declara la "Help Text" constante y dos funciones
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

const string kHelpText =
    "Este programa imprime en pantalla la palabra con mayor número de vocales "
    "y la palabra con el mayor número de consonantes (independientemente de si "
    "se trata de mayúsculas o minúsculas) que se encuentren en el fichero de "
    "texto que se le pase como parámetro.";

void Usage(int argc, char *argv[]);

