/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 17 2022
 * @brief complex-number namespacea and class Implementation
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen.git
 */
#include "complex_numbers.h"

#include <cmath>
/*
 * @note Mucha de las funciones no cumple con la guia de estilo de google para pasar los test
 */
namespace complex_numbers {
Complex::Complex(double re, double im) : real_(re), imag_(im) {} //constructor

double Complex::real() const { return real_; } //getter de un numero real
double Complex::imag() const { return imag_; } //getter de un numero imaginario

/*
 * @brief valor abusoluto de un numero imaginario
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
double Complex::abs() const { return std::sqrt(real_ * real_ + imag_ * imag_); }

/*
 * @brief conjugado de un numero imaginario
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
Complex Complex::conj() const { return Complex{real_, -imag_}; }

/*
 * @brief exponente de un numero imaginario
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
Complex Complex::exp() const {
  double e = std::exp(real_);
  return Complex{e * std::cos(imag_), e * std::sin(imag_)};
}

/*
 * @brief operador de suma de numeros imaginarios
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
Complex operator+(const Complex& lhs, const Complex& rhs) {
  Complex result{lhs.real() + rhs.real(), lhs.imag() + rhs.imag()};

  return result;
}

/*
 * @brief operador de resta de numeros imaginarios
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
Complex operator-(const Complex& lhs, const Complex& rhs) {
  Complex result{lhs.real() - rhs.real(), lhs.imag() - rhs.imag()};

  return result;
}

/*
 * @brief operador de multiplicacion de numeros imaginarios
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
Complex operator*(const Complex& lhs, const Complex& rhs) {
  Complex result{lhs.real() * rhs.real() - lhs.imag() * rhs.imag(),
                 lhs.real() * rhs.imag() + lhs.imag() * rhs.real()};

  return result;
}

/*
 * @brief operador de division de numeros imaginarios
 * @param[in] int imag_: declaro imag_ como el numero imaginario a ser evaluado
 * @param[in] int real_: declaro real_ como el numero real a ser evaluado
 */
Complex operator/(const Complex& lhs, const Complex& rhs) {
  Complex result{((lhs.real() * rhs.real()) + (lhs.imag() * rhs.imag())) /
                     (pow(rhs.real(), 2) + pow(rhs.imag(), 2)),
                 ((rhs.real() * lhs.imag()) - (lhs.real() * rhs.imag())) /
                     ((pow(rhs.real(), 2)) + pow(rhs.imag(), 2))};

  return result;
}

}  // namespace complex_numbers

