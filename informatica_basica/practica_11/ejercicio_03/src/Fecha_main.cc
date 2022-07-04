/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief clase Fecha
 *        este es un programa cliente que usa la clase Fecha
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_classes-RafaelGomezGuillen
 */

#include <iostream>

#include "Fecha.h"
 
int main() {
  Fecha hoy; 

  std::cout << hoy.Bisiesto(2016) << std::endl;
  std::cout << hoy.EsFechaValida(2, 10, 2021) << std::endl;
  hoy.FechasSucesivas(4, 3, 2020);
  return 0;
}