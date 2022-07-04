/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief clase ComputeInt
 *        este es un programa cliente que usa la clase ComputeInt
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_classes-RafaelGomezGuillen
 */

#include <iostream>

#include "ComputeInt.h"

int main() {
  ComputeInt computation; 
  std::cout << computation.Factorial(5) << std::endl; 
  std::cout << computation.SumSerie(100) << std::endl; 
  std::cout << computation.IsArmstrong(100) << std::endl; 
  std::cout << computation.IsPrime(13) << std::endl;
  std::cout << computation.IsPerfectPrime(23) << std::endl; 
  std::cout << computation.IsBalanced(14) << std::endl; 
  std::cout << computation.AreRelativePrimes(13, 17) << std::endl; 
  return 0;
}