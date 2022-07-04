/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief Complejo class Implementation
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#include "Complejo.h"

#include <cmath>
#include <iostream>

/*
 * @brief Muestra de una manera detallada el numero complejo
 * @param[in] real: referencia al numero real a mostrar
 * @param[in] imag: referencia al numero imag a mostrar
 */
std::ostream& operator<<(std::ostream& out, const Complejo& Complejo) {
  out << "Numero real: " << Complejo.real_ << ", numero imaginario: " << Complejo.imag_
      << "i";  // actual output done here
  return out;
}

/*
 * @brief Muestra de una manera detallada el numero complejo
 * @param[in] real: referencia al numero real a mostrar
 * @param[in] imag: referencia al numero imag a mostrar
 */

std::istream& operator>>(std::istream& in, Complejo& Complejo) {
  in >> Complejo.real_;
  in >> Complejo.imag_;
  return in;
}

/*
 * @brief Suma de dos numeros complejos
 * @param[in] real: referencia al numero real a evaluar
 * @param[in] imag: referencia al numero imag a evaluar
 */
Complejo operator+(const Complejo& a, const Complejo& b) {
  Complejo result{a.real() + b.real(), a.imag() + b.imag()};

  return result;
}

/*
 * @brief REsta de dos numeros complejos
 * @param[in] real: referencia al numero real a evaluar
 * @param[in] imag: referencia al numero imag a evaluar
 */
Complejo operator-(const Complejo& a, const Complejo& b) {
  Complejo result{a.real() - b.real(), a.imag() - b.imag()};

  return result;
}

/*
 * @brief Multiplicacion de dos numeros complejos
 * @param[in] real: referencia al numero real a evaluar
 * @param[in] imag: referencia al numero imag a evaluar
 */
Complejo operator*(const Complejo& a, const Complejo& b) {
  Complejo result{a.real() * b.real() - a.imag() * b.imag(),
                  a.real() * b.imag() + a.imag() * b.real()};

  return result;
}

/*
 * @brief Division de dos numeros complejos
 * @param[in] real: referencia al numero real a evaluar
 * @param[in] imag: referencia al numero imag a evaluar
 */
Complejo operator/(const Complejo& a, const Complejo& b) {
  Complejo result{((a.real() * b.real()) + (a.imag() * b.imag())) /
                      (pow(b.real(), 2) + pow(b.imag(), 2)),
                  ((b.real() * a.imag()) - (a.real() * b.imag())) /
                      ((pow(b.real(), 2)) + pow(b.imag(), 2))};

  return result;
}


