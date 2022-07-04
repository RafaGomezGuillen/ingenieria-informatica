/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 17 2022
 * @brief Racional class Implementation
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#include "racional.h"

#include <cmath>
#include <iostream>
#include <fstream>

void Usage(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Modo de uso: " << argv[0]
              << ": fichero_entrada fichero_salida" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información"
              << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/*
 * @brief Leer un objeto de tipo racional
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */
std::ostream& operator<<(std::ostream& out, const Racional& Racional) {
  out << Racional.num_ << "/" << Racional.den_;  // actual output done here
  return out;
}

/*
 * @brief Escribir un objeto de tipo racional
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */

std::istream& operator>>(std::istream& in, Racional& Racional) {
  in >> Racional.den_;
  in >> Racional.num_;
  return in;
}

/*
 * @brief Suma de dos numeros Racionales
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */
Racional operator+(const Racional& a, const Racional& b) {
  Racional result{(a.num() * b.den()) + (a.den() * b.num()) , a.den() * b.den()};

  return result;
}

/*
 * @brief Resta de dos numeros Racionales
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */
Racional operator-(const Racional& a, const Racional& b) {
  Racional result{(a.num() * b.den()) - (a.den() * b.num()) , a.den() * b.den()};

  return result;
}

/*
 * @brief Multiplicacion de dos numeros Racionales
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */
Racional operator*(const Racional& a, const Racional& b) {
  Racional result{a.num() * b.num(), a.den() * b.den()};
  return result;
}

/*
 * @brief Division de dos numeros Racionales
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */
Racional operator/(const Racional& a, const Racional& b) {
  Racional result{a.num() * b.den(), a.den() * b.num()};

  return result;
}

/*
 * @brief Todos los operadores de comparacion
 * @param[in] den_: referencia al denominador
 * @param[in] num_: referencia al numerador
 */
bool operator==(const Racional& a, const Racional& b) {
  return (a.num() == b.num() && a.den() == b.den());
}

bool operator>(const Racional& a, const Racional& b){
	if (a.num() > b.num()) {
		return true;
	}
	if ((a.num() == a.num()) && (a.den() > b.den())) {
		return true;
	}
	return false;
}

bool operator<(const Racional& a, const Racional& b){
	if (a.num() < b.num()) {
		return true;
	}
	if ((a.num() == a.num()) && (a.den() < b.den())) {
		return true;
	}
	return false;
}

bool operator!=(const Racional& a, const Racional& b) {
  return !(a == b);
}

