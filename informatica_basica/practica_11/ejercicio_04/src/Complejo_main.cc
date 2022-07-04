/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief clase Complejo
 *        este es un programa cliente que usa la clase Complejo
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_classes-RafaelGomezGuillen
 */

#include <iostream>

#include "Complejo.h"
 
int main() {
  Complejo complejo1{1, 2};
  Complejo complejo2{1, 2};
  Complejo complejo3{-3, -5};
  Complejo complejo4{7, -9};
  Complejo complejo5{-4, 5};
  Complejo complejo6{8, -2};
  Complejo suma = complejo1 + complejo2; 
  Complejo resta = complejo3 - complejo4;
  Complejo multiplicacion = complejo1 * complejo4;
  Complejo division = complejo5 / complejo6;
  
  std::cout << suma << std::endl;
  std::cout << resta << std::endl;
  std::cout << multiplicacion << std::endl;
  std::cout << division << std::endl;
  return 0;
}
