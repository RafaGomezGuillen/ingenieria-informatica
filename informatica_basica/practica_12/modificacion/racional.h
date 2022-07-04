/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 17 2022
 * @brief Racional class Definition
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen.git
 */
#include <iostream>
#include <string>
#ifndef Racional_H
#define Racional_H

/**
 * @brief Racional type
 */
class Racional {
 public:
  Racional() = default; //constructor por defecto
  Racional(int num, int den) : num_(num), den_(den) {} //constructor parametrizado
  void Simplificar(int num, int den);
  int num() const { return num_; } //getter del numerador
  int den() const { return den_; } //getter del denominador

  friend std::ostream& operator<<(std::ostream& out, const Racional& Racional);
  friend std::istream& operator>>(std::istream& in, Racional& Racional);

 private:
  int num_;  /// Numerador
  int den_;  /// Denominador
};

bool operator==(const Racional& a, const Racional& b);
bool operator>(const Racional& a, const Racional& b);
bool operator<(const Racional& a, const Racional& b);
bool operator!=(const Racional& a, const Racional& b);

#endif

