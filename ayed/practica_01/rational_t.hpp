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
#pragma once

#include <cassert>
#include <cmath>
#include <iostream>
#define EPSILON 1e-6  // Defino epsilon
using namespace std;

class rational_t {
 public:                                     // Parte publica de la clase
  rational_t(const int = 0, const int = 1);  // Constructor
  ~rational_t() {}                           // Destructor

  int get_num() const;  // Getter del numerador
  int get_den() const;  // Getter del denominador

  void set_num(const int);  // Setter del numerador
  void set_den(const int);  // Setter del denominador

  double value(void) const;  // Establece el valor

  // FASE II
  bool is_equal(const rational_t&, const double precision = EPSILON) const;
  bool is_greater(const rational_t&, const double precision = EPSILON) const;
  bool is_less(const rational_t&, const double precision = EPSILON) const;

  // FASE III
  rational_t add(const rational_t&);
  rational_t substract(const rational_t&);
  rational_t multiply(const rational_t&);
  rational_t divide(const rational_t&);

  rational_t reciprocal(void) const;

  void write(ostream& = cout) const;
  void read(istream& = cin);

 private:    // Parte privada de la clase
  int num_;  // Declaro y defino el numerador
  int den_;  // Declaro y defino el denominador
};
