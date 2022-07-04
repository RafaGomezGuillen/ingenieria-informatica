/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Mersenne
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Este programa declara eñ "Help text" y dos funciones
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

const string kHelpText =
    "Este programa toma como entrada un numero natural y muestra como salida "
    "los primeros numeros primos de Mersenne";

void Usage(int argc, char *argv[]);
void Funcion_Mersenne(const int kNumero_natural);