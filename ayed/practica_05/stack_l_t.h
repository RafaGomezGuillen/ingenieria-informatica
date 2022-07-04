// AUTOR: Rafael Gomez Guillen
// FECHA: 13/05/2022
// EMAIL: alu0101462578@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS:

#ifndef STACKL_H_
#define STACKL_H_

#include <cassert>
#include <iomanip>
#include <iostream>

#include "dll_t.h"
using namespace std;

// Clase para pilas mediante estructura dinámica
template <class T>
class stack_l_t {
 public:
  // constructor
  stack_l_t(void) : l_() {}

  // destructor
  ~stack_l_t(void) {}

  // operaciones
  void push(const T&);
  void pop(void);
  const T& top(void) const;
  bool empty(void) const;

  // E/S
  std::ostream& write(std::ostream& os = std::cout) const;

  int Sum_pair();

 private:
  dll_t<T> l_;
};

// operaciones
template <class T>
void stack_l_t<T>::push(const T& dato) {
  dll_node_t<T>* nodo = new dll_node_t<T>(dato);
  assert(nodo != NULL);
  l_.push_front(nodo);
}

template <class T>
void stack_l_t<T>::pop(void) {
  assert(!empty());
  delete l_.pop_front();
}

template <class T>
const T& stack_l_t<T>::top(void) const {
  assert(!empty());
  return l_.get_head()->get_data();
}

template <class T>
bool stack_l_t<T>::empty(void) const {
  return l_.empty();
}

// E/S
template <class T>
std::ostream& stack_l_t<T>::write(std::ostream& os) const {
  dll_node_t<T>* aux = l_.get_head();
  while (aux != NULL) {
    os << " │ " << std::setw(2) << aux->get_data() << "  │" << std::endl;
    aux = aux->get_next();
  }
  os << " └─────┘" << std::endl;
  return os;
}

template <class T>
int stack_l_t<T>::Sum_pair() {
  int suma = 0;
  dll_node_t<T>* aux = l_.get_head();
  while (aux != NULL) {
    if (aux->get_data() % 2 == 0){
      suma += aux->get_data();
    } 
    aux = aux->get_next();
  }
  return suma;
}

#endif  // STACKL_H_
