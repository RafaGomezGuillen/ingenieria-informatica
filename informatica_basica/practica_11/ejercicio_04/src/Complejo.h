/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 10 2022
 * @brief Complejo Definition
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */
#include <iostream>
#ifndef COMPLEJO_H
#define COMPLEJO_H

/**
 * @brief Complejo type
 */
class Complejo {
 public:
  Complejo(double re, double im) : real_(re), imag_(im) {}
  double real() const { return real_; }
  double imag() const { return imag_; }

  friend std::ostream& operator<<(std::ostream& out, const Complejo& Complejo);
  friend std::istream& operator>>(std::istream& in, Complejo& Complejo); 

 private:
  double real_;  /// Parte real
  double imag_;  /// Parte imaginaria
};

Complejo operator+(const Complejo& a, const Complejo& b);
Complejo operator-(const Complejo& a, const Complejo& b);
Complejo operator*(const Complejo& a, const Complejo& b);
Complejo operator/(const Complejo& a, const Complejo& b);

#endif