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

using namespace std;

// Te permite hacer vectores de int, double e incluso vector de vectores
template <class T>
class vector_t {
 public:                    // Parte publica de la clase
  vector_t(const int = 0);  // Constructor
  ~vector_t();              // Destructor

  void resize(const int);  // Restablece el tamano del vector

  // getters
  T get_val(const int) const;
  int get_size(void) const;

  // setters
  void set_val(const int, const T);

  // getters-setters
  T& at(const int);
  T& operator[](const int);

  // getters constantes
  const T& at(const int) const;
  const T& operator[](const int) const;

  // Metodos de entrada y salida
  void write(ostream& = cout) const;
  void read(istream& = cin);

 private:  // Parte privada de la clase
  T* v_; 
  int sz_; // tamanio del vector

  void build(void);
  void destroy(void);
};
// Para hacer template tienes que hacer el cuerpo de los metodos en el hpp
// A todo tienes que ponerle template <class T>

// Constructor
template <class T>
vector_t<T>::vector_t(const int n) {
  sz_ = n;
  build();
}

// Destructor
template <class T>
vector_t<T>::~vector_t() {
  destroy();
}

template <class T>
void vector_t<T>::build() {
  v_ = NULL;
  if (sz_ != 0) {
    v_ = new T[sz_];
    assert(v_ != NULL);
  }
}

template <class T>
void vector_t<T>::destroy() {
  if (v_ != NULL) {
    delete[] v_;
    v_ = NULL;
  }
  sz_ = 0;
}

template <class T>
void vector_t<T>::resize(const int n) {
  destroy();
  sz_ = n;
  build();
}

template <class T>
inline T vector_t<T>::get_val(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

template <class T>
inline int vector_t<T>::get_size() const {
  return sz_;
}

template <class T>
void vector_t<T>::set_val(const int i, const T d) {
  assert(i >= 0 && i < get_size());
  v_[i] = d;
}

template <class T>
T& vector_t<T>::at(const int i) {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

template <class T>
T& vector_t<T>::operator[](const int i) {
  return at(i);
}

template <class T>
const T& vector_t<T>::at(const int i) const {
  assert(i >= 0 && i < get_size());
  return v_[i];
}

template <class T>
const T& vector_t<T>::operator[](const int i) const {
  return at(i);
}

// Metodo de salida
template <class T>
void vector_t<T>::write(ostream& os) const {
  os << get_size() << ":\t";
  for (int i = 0; i < get_size(); i++) os << at(i) << "\t";
  os << endl;
}

// Metodo para leer por teclado
template <class T>
void vector_t<T>::read(istream& is) {
  is >> sz_;
  resize(sz_);
  for (int i = 0; i < sz_; ++i) is >> at(i);
}

// FASE II: producto escalar
template <class T>
T scal_prod(const vector_t<T>& v, const vector_t<T>& w) {
  assert(v.get_size() == w.get_size());
  T product;
  for (double i = 0.0; i < w.get_size(); i++) {
    product = product + v.at(i) * w.at(i);
  }
  return product;
}

double scal_prod(const vector_t<rational_t>& v, const vector_t<rational_t>& w) {
  assert(v.get_size() == w.get_size());
  double product;
  for (double i = 0.0; i < w.get_size(); i++) {
    product = product + double(v.at(i).value() * w.at(i).value());
  }
  return product;
}
