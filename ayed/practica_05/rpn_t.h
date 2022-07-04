// AUTOR:
// FECHA:
// EMAIL:
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: Clase RPN (Reverse Polish Notation)

#ifndef RPNT_H_
#define RPNT_H_

#include <cctype>
#include <cmath>
#include <iostream>
//#include <cstdlib>

#include "queue_l_t.h"
using namespace std;

// Clase RPN (Reverse Polish Notation)
template <class T>
class rpn_t {
 public:
  // constructor
  rpn_t(void) : stack_() {}

  // destructor
  ~rpn_t() {}

  // operaciones
  const int evaluate(queue_l_t<char>&);

 private:
  T stack_;
  void operate_(const char operador);
};

// operaciones

template <class T>
const int rpn_t<T>::evaluate(queue_l_t<char>& q) {
  while (!q.empty()) {
    char c = q.front();
    q.pop();
    cout << "Sacamos de la cola un carácter: " << c;

    if (isdigit(c)) {
      int i = c - '0';
      stack_.push(i);  // lo metemos en la pila

      cout << " (es un dígito) " << endl
           << "   Lo metemos en la pila..." << endl;
      // Si es un operando
    } else {
      cout << " (es un operador)" << endl;
      operate_(c);  // nos dirigimos a la función "operate_"
    }
  }

  return stack_.top();  // top de la pila = resultado final de la operación
}

template <class T>
void rpn_t<T>::operate_(const char c) {
  assert(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c ==
  'r' ||
         c == 'l' || c == 'c');

  int a, b;  // operandos
  // primer operando = a
  a = stack_.top();
  stack_.pop();
  cout << "   Sacamos de la pila un operando: " << a << endl;
  // solo sacamos un segundo operando para operaciones de aridad 2
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^') {
    // segundo operando = b
    b = stack_.top();
    stack_.pop();
    cout << "   Sacamos de la pila otro operando: " << b << endl;
  }
  switch (c) {
    case '+':
      a = a + b;
      break;

    case '-':
      a = b - a;
      break;

    case '*':
      a = a * b;
      break;

    case '/':
      a = b / a;
      break;
      // Fase 2: Operadores "exponente(^)" y "raiz_cuadrada(r)"
    case '^':
      a = pow(b, a);  // b^a
      break;

    case 'r':
      a = sqrt(a);  // r(a)
      break;
      // Fase 3: Operadores "logaritmo_en_base_2(l)" y
      // "elevación_al_cuadrado(c)"
    case 'l':
      a = log2(a);  // log(en_base_2) de 'a'
      break;
    case 'c':
      a = pow(a, 2);  // a^2
      break;
  }

  stack_.push(a);  // push de 'a'(el resultado) en la pila

  cout << "   Metemos en la pila el resultado: " << a << endl;
}
