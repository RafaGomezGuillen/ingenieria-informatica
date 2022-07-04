/**
 * AUTOR: Rafael Gomez Guillen
 * FECHA:
 * EMAIL: alu0101462578@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y estructura de datos
 * PRACTICA: 2
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
                "C++ Programming Style Guidelines"
                https://geosoft.no/development/cppstyle.html

 */

#include "rational_t.hpp"

// Constructor
rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// Getters
inline int rational_t::get_num() const { return num_; }
inline int rational_t::get_den() const { return den_; }

// Setters
void rational_t::set_num(const int n) { num_ = n; }
void rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}

// Metodo quer divide el numerador entre el denominador
inline double rational_t::value() const {
  return double(get_num()) / get_den();
}

// El "inverse" del numero racional
rational_t rational_t::opposite() const {
  return rational_t((-1) * get_num(), get_den());
}

// El inverso del numero racional
rational_t rational_t::reciprocal() const {
  return rational_t(get_den(), get_num());
}

// Metodo para comprobar que a y b son iguales
bool rational_t::is_equal(const rational_t& r, const double precision) const {
  return fabs(value() - r.value()) < precision;
}

// Metodo para comprobar que a es mayor que b
bool rational_t::is_greater(const rational_t& r, const double precision) const {
  return (value() - r.value()) > precision;
}

// Metodo para comprobar que a es menor que b
bool rational_t::is_less(const rational_t& r, const double precision) const {
  return r.is_greater(*this, precision);
}

// Metodo de suma
rational_t rational_t::add(const rational_t& r) const {
  return rational_t(get_num() * r.get_den() + get_den() * r.get_num(),
                    get_den() * r.get_den());
}

// Metodo de resta
rational_t rational_t::substract(const rational_t& r) const {
  return add(r.opposite());
}

// Metodo de multiplicacion
rational_t rational_t::multiply(const rational_t& r) const {
  return rational_t(get_num() * r.get_num(), get_den() * r.get_den());
}

// Metodo de division
rational_t rational_t::divide(const rational_t& r) const {
  return multiply(r.reciprocal());
}

// Operador de suma
rational_t operator+(const rational_t& a, const rational_t& b) {
  return a.add(b);  // Llamo al metodo add
}

// Operador de resta
rational_t operator-(const rational_t& a, const rational_t& b) {
  return a.substract(b);  // Llamo al metodo substract
}

// Operador de multiplicacion
rational_t operator*(const rational_t& a, const rational_t& b) {
  return a.multiply(b);  // Llamo al metodo multiply
}

// Operador de division
rational_t operator/(const rational_t& a, const rational_t& b) {
  return a.divide(b);  // Llamo al metodo divide
}

// Metodo de salida
void rational_t::write(ostream& os) const {
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}

// Metodo de entrada
void rational_t::read(istream& is) {
  is >> num_ >> den_;
  assert(den_ != 0);
}

// Operador de salida
ostream& operator<<(ostream& os, const rational_t& r) {
  r.write(os);
  return os;
}

// Operador de entrada
istream& operator>>(istream& is, rational_t& r) {
  r.read(is);
  return is;
}
