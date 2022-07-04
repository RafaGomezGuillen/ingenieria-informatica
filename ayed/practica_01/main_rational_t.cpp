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
#include <cmath>
#include <iostream>

#include "rational_t.hpp"
using namespace std;

int main() {
  rational_t a(4, 3), b(3), c(18, 3);

  cout << "a.value()= " << a.value() << endl;
  cout << "b.value()= " << b.value() << endl;
  cout << "c.value()= " << c.value() << endl;
  cout << "a: ";
  a.write();
  cout << "b: ";
  b.write();
  c.read();
  cout << "c: ";
  c.write();

  // FASE II
  rational_t x(1, 3), y(2, 3);
  x.write();
  y.write();
  cout << "x == y? " << (x.is_equal(y) ? "true" : "false") << endl;
  cout << "x < y? " << (x.is_greater(y) ? "true" : "false") << endl;
  cout << "x > y? " << (x.is_less(y) ? "true" : "false") << endl;

  // FASE III
  cout << "a + b: ";
  a.add(b).write();
  cout << "b - a: ";
  b.substract(a).write();
  cout << "a * b: ";
  a.multiply(b).write();
  cout << "a / b: ";
  a.divide(b).write();

  cout << "El reciproco de c:";
  c.write();
  cout << "es:";
  c.reciprocal().write();

  //dado x su inverso es 1/x
  return 0;
}
