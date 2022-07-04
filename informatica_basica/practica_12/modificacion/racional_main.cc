/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief clase racional
 *        este es un programa cliente que usa la clase racional
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_classes-RafaelGomezGuillen
 */

#include <iostream>

#include "racional.h"
using namespace std;

int main() {
  Racional racional1, racional2, racional3;
  racional1.Simplificar(5, 10);
  racional2.Simplificar(72, 108);
  racional3.Simplificar(8, 4);

  return 0;
}