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

const string kHelpText = " ./cripto -- Cifrado de ficheros"
"Modo de uso: ./cripto fichero_entrada fichero_salida método password operación"

"fichero_entrada: Fichero a codificar"
"fichero_salida:  Fichero codificado"
"método:          Indica el método de encriptado"
                   "1: Cifrado xor"
                   "2: Cifrado de César"
"password:        Palabra secreta en el caso de método 1, Valor de K en el método 2"
"operación:       Operación a realizar en el fichero"
                   "+: encriptar el fichero"
                   "-: desencriptar el fichero";

void Usage(int argc, char *argv[]);
