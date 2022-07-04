/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 10 2022
 * @brief clase Vector3D
 *        este es un programa cliente que usa la clase
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#include <iostream>

#include "Vector3D.h"

int main() {
  Vector3D vector1{1.0, 9.0, 1.0};
  Vector3D vector2{2.0, 2.0, 2.0};
  Vector3D suma = vector1 + vector2;
  Vector3D multiplicacion = vector1 * vector2;
  Vector3D vector3;
  Vector3D vector4;
  
  std::cout << suma << std::endl;
  std::cout << multiplicacion << std::endl;
  std::cout << vector3.Modulo(3.0, 4.0, 5.0) << std::endl;
  vector4.Normalizar(3.0, 4.0, 5.0);
  return 0;
}

