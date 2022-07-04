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
#include <bits/stdc++.h>


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

void Racional::Simplificar(int num, int den){
  int d;
    d = std::__gcd(num, den);
 
    num = num / d;
    den = den / d;

	if(den == 1){
		std::cout << num << std::endl;
	} else {
		std::cout <<num << "/"<< den << std::endl;
	}
}


 
