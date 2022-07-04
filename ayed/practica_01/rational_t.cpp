/**
 * AUTOR: Rafael Gomez Guillen
 * FECHA: 11 de marzo de 2022
 * EMAIL: alu0101462578@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRACTICA: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
              "C++ Programming Style Guidelines"
              https://geosoft.no/development/cppstyle.html
              pauta de estilo [92]: comentarios multilínea usando solo "//"
 *
*/

#include "rational_t.hpp"

#include <algorithm>
#include <cmath>

// Constructor
rational_t::rational_t(const int n, const int d) {
  assert(d != 0);  // El denomidor no puede ser igual a 0
  num_ = n, den_ = d;
}

// Getters del denominador y numerador
int rational_t::get_num() const { return num_; }
int rational_t::get_den() const { return den_; }

// Setters del denominador y numerador
void rational_t::set_num(const int n) { num_ = n; }
void rational_t::set_den(const int d) {
  assert(d != 0);  // El denomidor no puede ser igual a 0
  den_ = d;
}

// Funcion que divide el numerador y denominador
double rational_t::value() const { return double(get_num()) / get_den(); }

// Funcion para comprobar que a y b son iguales
bool rational_t::is_equal(const rational_t& r, const double precision) const {
  double numurator =
      (r.den_ * get_num()) - (r.num_ * get_den());  // Resultado del numerador
  double denominator = r.den_ * get_den();          // Resultado del denominador
  double numero_real =
      (numurator, denominator);  // defino y declaro el numero real

  if (abs(numero_real) < precision) {
    return true;
  } else {
    return false;
  }
}

// Funcion para comprobar que a es mayor que b
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  double numurator = (r.den_ * get_num()) - (r.num_ * get_den());
  ;                                         // Resultado del numerador
  double denominator = r.den_ * get_den();  // Resultado del denominador
  double numero_real =
      (numurator, denominator);  // defino y declaro el numero real
  if (numero_real > precision) {
    return true;
  } else {
    return false;
  }
}

// Funcion para comprobar que a es menor que b
bool rational_t::is_less(const rational_t& r, const double precision) const {
  double numurator =
      (r.den_ * get_num()) - (r.num_ * get_den());  // Resultado del numerador
  double denominator = r.den_ * get_den();          // Resultado del denominador
  double numero_real =
      (numurator, denominator);  // defino y declaro el numero real
  if (numero_real < precision) {
    return true;
  } else {
    return false;
  }
}

// Suma de numeros racionales
rational_t rational_t::add(const rational_t& r) {
  rational_t add;  // Defino y declaro suma
  add.num_ =
      (r.den_ * get_num()) + (r.num_ * get_den());  // Resultado del numerador
  add.den_ = r.den_ * get_den();                    // Resultado del denominador

  return add;
}

// Resta de numeros racionales
rational_t rational_t::substract(const rational_t& r) {
  rational_t substract;  // Defino y declaro resta
  substract.num_ =
      (r.den_ * get_num()) - (r.num_ * get_den());  // Resultado del numerador
  substract.den_ = r.den_ * get_den();              // Resultado del denominador

  return substract;
}

// Multiplicacion de numeros racionales
rational_t rational_t::multiply(const rational_t& r) {
  rational_t multiply;                 // Defino y declaro multiplicacion
  multiply.num_ = r.num_ * get_num();  // Resultado del numerador
  multiply.den_ = r.den_ * get_den();  // Resultado del denominador

  return multiply;
}

// Divisiom de numeros racionales
rational_t rational_t::divide(const rational_t& r) {
  rational_t divide;                 // Defino y declaro division
  divide.num_ = r.den_ * get_num();  // Resultado del numerador
  divide.den_ = r.num_ * get_den();  // Resultado del denominador

  return divide;
}

// Para mostrar en pantalla los numeros racionales
void rational_t::write(ostream& os) const {
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}

// Para imprimir por teclado los numeros racionales
void rational_t::read(istream& is) {
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}

rational_t rational_t::reciprocal(void) const {
  rational_t reciprocal;
  reciprocal.num_ = get_den(); 
  reciprocal.den_ = get_num();

  return reciprocal;
}
