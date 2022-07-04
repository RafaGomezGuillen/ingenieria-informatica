/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Este programa declara la "Help Text" constante y una funciones
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

const string kHelpText =
    "Este  programa que copia un fichero de texto en otro añadiendo al "
    "principio de cada línea el número de la misma. Ambos ficheros serán "
    "idénticos salvo que el de salida contiene al principio de cada línea el "
    "número de la misma.";

void Usage(int argc, char *argv[]);
