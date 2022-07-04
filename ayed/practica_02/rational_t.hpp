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

#pragma once

#include <cassert>
#include <cmath>
#include <iostream>

// pauta de estilo [5]
#define EPSILON 1e-6

using namespace std;

class rational_t {
 public:                                     // Parte publica de la clase
  rational_t(const int = 0, const int = 1);  // Constructor
  ~rational_t() {}                           // Destructor

  int get_num() const;  // Getter del numerador
  int get_den() const;  // Getter del denominador

  void set_num(const int);  // Setter del numerador
  void set_den(const int);  // Setter del denominador

  double value(void) const;  
  rational_t opposite(void) const;
  rational_t reciprocal(void) const;

  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;

// Metodos de suma, resta, multiplicacion y division
  rational_t add(const rational_t&) const;
  rational_t substract(const rational_t&) const;
  rational_t multiply(const rational_t&) const;
  rational_t divide(const rational_t&) const;

  void write(ostream& os = cout) const;
  void read(istream& is = cin);

 private:    // Parte privada de la calse
  int num_;  // Declaro y defino el numerador
  int den_;  // Declaro y defino el denominador
};
// Operadores de entrada y salida
ostream& operator<<(ostream& os, const rational_t&);
istream& operator>>(istream& is, rational_t&);        

// Operadores de suma, resta, multiplicacion y division
rational_t operator+(const rational_t&, const rational_t&);
rational_t operator-(const rational_t&, const rational_t&);
rational_t operator*(const rational_t&, const rational_t&);
rational_t operator/(const rational_t&, const rational_t&);
