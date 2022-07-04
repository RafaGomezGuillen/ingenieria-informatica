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
#include <iostream>

#include "vector_t.hpp"

using namespace std;

// Te permite hacer vectores de int, double e incluso vector de vectores
template <class T>
class matrix_t {
 public:                                   // Parte publica de la clase
  matrix_t(const int = 0, const int = 0);  // Contructor
  ~matrix_t();                             // Destructor

  void resize(const int, const int);  // Restablece el tamano de la matriz

  int get_m(void) const;  // Getter de las filas
  int get_n(void) const;  // Getter de las columnas

  // getters-setters
  T& at(const int, const int);
  T& operator()(const int, const int);

  // getters constantes
  const T& at(const int, const int) const;
  const T& operator()(const int, const int) const;

  // operaciones y operadores
  void multiply(const matrix_t<T>&, const matrix_t<T>&);

  void write(ostream& = cout) const;
  void read(istream& = cin);

 private:      // Parte privada de la clase
  int m_, n_;  // m_ filas y n_ columnas
  vector_t<T> v_;

  int pos(const int, const int) const;
};
// Para hacer template tienes que hacer el cuerpo de los metodos en el hpp
// A todo tienes que ponerle template <class T>

// Contructor
template <class T>
matrix_t<T>::matrix_t(const int m, const int n) {
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}

// Destructor
template <class T>
matrix_t<T>::~matrix_t() {}

// Metodo que reestablece (redimenciona) el tamano de la matriz
template <class T>
void matrix_t<T>::resize(const int m, const int n) {
  assert(m > 0 && n > 0);
  m_ = m;
  n_ = n;
  v_.resize(m_ * n_);
}

// Getters de la fila y columna de la matriz
template <class T>
inline int matrix_t<T>::get_m() const {
  return m_;
}
template <class T>
inline int matrix_t<T>::get_n() const {
  return n_;
}

// Compruebo que las filas y columnas son mayores que 0 y menores o iguales que
// la establecida por el usuario
template <class T>
T& matrix_t<T>::at(const int i, const int j) {
  // Que los indices esten dentro del rango
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
} 

// Para establecer las filas y columnas
template <class T>
T& matrix_t<T>::operator()(const int i, const int j) {
  return at(i, j);
}

// Compruebo que las filas y columnas son mayores que 0 y menores o iguales que
// la establecida por el usuario si lo pasa de manera constante
template <class T>
const T& matrix_t<T>::at(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return v_[pos(i, j)];
}

// Para establecer las filas y columnas si el usuario lo pasa de manera
// constante
template <class T>
const T& matrix_t<T>::operator()(const int i, const int j) const {
  return at(i, j);
}

// Metodo de salida
template <class T>
void matrix_t<T>::write(ostream& os) const {
  os << get_m() << "x" << get_n() << endl;
  for (int i = 1; i <= get_m(); ++i) {
    for (int j = 1; j <= get_n(); ++j) os << at(i, j) << "\t";
    os << endl;
  }
  os << endl;
}

// Metodo de entrada
template <class T>
void matrix_t<T>::read(istream& is) {
  is >> m_ >> n_;
  resize(m_, n_);
  for (int i = 1; i <= get_m(); ++i)
    for (int j = 1; j <= get_n(); ++j) is >> at(i, j);
}

template <class T>
inline int matrix_t<T>::pos(const int i, const int j) const {
  assert(i > 0 && i <= get_m());
  assert(j > 0 && j <= get_n());
  return (i - 1) * get_n() + (j - 1);
}

// FASE III: producto matricial
template <class T>
void matrix_t<T>::multiply(const matrix_t<T>& A, const matrix_t<T>& B) {
  // Compuebo que las colmunas de A es igual a las filas de B
  assert(A.get_n() == B.get_m());
  m_ = A.get_m();
  n_ = B.get_n();
  // Redimensionar la matriz con la dimensión apropiada, a partir de las dos
  // matrices a multiplicar.
  v_.resize(m_ * n_);
  for (int i = 1; i <= A.get_m(); i++) {
    for (int j = 1; j <= B.get_n(); j++) {
      at(i, j) = 0;
      for (int k = 1; k <= B.get_m(); k++) {
        at(i, j) += A(i, k) * B(k, j);
      }
    }
  }
}

template <class T>
vector_t<T> matrix_t<T>::Escalera() {
  int m{get_m()}, n{get_n()};
  vector_t<T> vector{m * n};

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i == j) {
        vector[(i - 1) * n + j - 1] = at(i, j);
      }
    }
  }
  for (int i = 1; i <= n - 1; i++) {
    for (int j = 2; j <= m; j++) {
      if (i + 1 == j) {
        vector[(i - 1) * n + j - 1] = at(i, j);
      }
    }
  }
  return vector;
}
