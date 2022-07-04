/**
 * AUTOR: Rafael Gomez Guillen
 * FECHA: 29/04/2022
 * EMAIL: alu0101462578@ull.edu.es
 * VERSION: 4.0
 * ASIGNSTURA: Algoritmos y Estructuras de Datos
 * PRACTICA Nº: 4
 * ESTILO: Google C++ Style Guide
 * COMENTARIOS:
 */

#ifndef SLLPOLYNOMIAL_H_
#define SLLPOLYNOMIAL_H_

#include <math.h>  // fabs, pow

#include <iostream>

#include "pair_t.h"
#include "sll_t.h"
#include "vector_t.h"
using namespace std;

#define EPS 1.0e-6

typedef pair_t<double> pair_double_t;           // Campo data_ de SllPolynomial
typedef sll_node_t<pair_double_t> SllPolyNode;  // Nodos de SllPolynomial

// Clase para polinomios basados en listas simples de pares
class SllPolynomial : public sll_t<pair_double_t> {
 public:
  // constructores
  SllPolynomial(void) : sll_t(){};
  SllPolynomial(const vector_t<double>&, const double = EPS);

  // destructor
  ~SllPolynomial(){};

  // E/S
  void Write(std::ostream& = std::cout) const;

  // operaciones
  double Eval(const double) const;
  bool IsEqual(const SllPolynomial&, const double = EPS) const;
  void Sum(const SllPolynomial&, SllPolynomial&, const double = EPS);

  SllPolynomial EliminarUltimoYPrimerMonomio() const;

};

bool IsNotZero(const double val, const double eps = EPS) {
  return fabs(val) > eps;
}

// FASE II
// constructor
SllPolynomial::SllPolynomial(const vector_t<double>& v, const double eps) {
  for (int i = v.get_size() - 1; i >= 0; i--) {
    SllPolyNode* aux = new SllPolyNode;
    pair_double_t pair_aux{v.at(i), i};
    aux->set_data(pair_aux);
    if (fabs(pair_aux.get_val()) > eps) {
      push_front(aux);
    }
  }
}

// E/S
void SllPolynomial::Write(std::ostream& os) const {
  os << "[ ";
  bool first{true};
  SllPolyNode* aux{get_head()};
  while (aux != NULL) {
    int inx{aux->get_data().get_inx()};
    double val{aux->get_data().get_val()};
    if (val > 0)
      os << (!first ? " + " : "") << val;
    else
      os << (!first ? " - " : "-") << fabs(val);
    os << (inx > 1 ? " x^" : (inx == 1) ? " x" : "");
    if (inx > 1) os << inx;
    first = false;
    aux = aux->get_next();
  }
  os << " ]" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const SllPolynomial& p) {
  p.Write(os);
  return os;
}

// Operaciones con polinomios

// FASE III
// Evaluación de un polinomio representado por lista simple
double SllPolynomial::Eval(const double x) const {
  double result{0.0};
  SllPolyNode* aux;
  aux = get_head();
  while (aux->get_next() != NULL) {
    result += (aux->get_data().get_val() * pow(x, aux->get_data().get_inx()));
    aux = aux->get_next();
  }
  result += (aux->get_data().get_val() * pow(x, aux->get_data().get_inx()));

  return result;
}

// Comparación si son iguales dos polinomios representados por listas simples
bool SllPolynomial::IsEqual(const SllPolynomial& sllpol,
                            const double eps) const {
  bool differents = false;
  int i = 0, j = 0;
  SllPolyNode* aux;
  SllPolyNode* aux2;
  aux = get_head();
  aux2 = sllpol.get_head();
  while (aux->get_next() != NULL && aux2->get_next() != NULL) {
    if (fabs(aux->get_data().get_val() - aux2->get_data().get_val()) > eps &&
        fabs(aux->get_data().get_inx() - aux2->get_data().get_inx()) > eps) {
      return false;
    }
    i++;
    j++;
    aux = aux->get_next();
    aux2 = aux2->get_next();
  }
  i == j ? differents = false : differents = true;
  return !differents;
}

// FASE IV
// Generar nuevo polinomio suma del polinomio invocante mas otro polinomio
void SllPolynomial::Sum(const SllPolynomial& sllpol, SllPolynomial& sllpolsum,
                        const double eps) {
  SllPolyNode* aux1 = get_head();
  SllPolyNode* aux2 = sllpol.get_head();
  int size_list1 = 1, size_list2 = 1;

  while (aux1 != NULL) {
    size_list1++;
    aux1 = aux1->get_next();
  }

  while (aux2 != NULL) {
    size_list2++;
    aux2 = aux2->get_next();
  }

  vector_t<pair_double_t> vector1;
  vector_t<pair_double_t> vector2;
  vector_t<double> result;

  if (size_list1 <= size_list2) {
    vector1.resize(size_list2);
    vector2.resize(size_list2);
  } else {
    vector1.resize(size_list1);
    vector2.resize(size_list1);
  }

  int i = 0;
  aux1 = get_head();
  aux2 = sllpol.get_head();
  while (aux1 != NULL || aux2 != NULL) {
    if (aux1 != NULL) {
      pair_double_t pair1{aux1->get_data()};
      vector1[i] = pair1;
      aux1 = aux1->get_next();
    }
    if (aux2 != NULL) {
      pair_double_t pair2{aux2->get_data()};
      vector2[i] = pair2;
      aux2 = aux2->get_next();
    }
    i++;
  }

  pair_double_t temp_pair(vector1[i - 1]);
  pair_double_t temp_pair2(vector2[i - 1]);
  int size1 = temp_pair.get_inx() + 1;
  int size2 = temp_pair2.get_inx() + 1;
  size1 < size2 ? result.resize(size2) : result.resize(size1);

  for (int i = 0; i < result.get_size(); i++) {
    pair_double_t pair_result(result[i], i);
    for (int j = 0; j < vector1.get_size(); j++) {
      pair_double_t pair1 = vector1[j];
      pair_double_t pair2 = vector2[j];
      if (pair1.get_inx() == i) {
        pair_result.set(pair_result.get_val() + pair1.get_val(), i);
      }
      if (pair2.get_inx() == i) {
        pair_result.set(pair_result.get_val() + pair2.get_val(), i);
      }
    }
    result[i] = pair_result.get_val();
  }

  SllPolyNode* node;
  for (int i = result.get_size(); i > 0; i--) {
    int real_pos = i - 1;
    if (IsNotZero(result.get_val(real_pos), eps)) {
      pair_double_t pair(result.get_val(real_pos), real_pos);
      node = new SllPolyNode;
      node->set_data(pair);
      sllpolsum.push_front(node);
    }
  }
}

SllPolynomial SllPolynomial::EliminarUltimoYPrimerMonomio() const {
  SllPolyNode* aux = get_head();
  SllPolynomial lista;
  SllPolynomial result;
  double i{0};
  while (aux != NULL) {
    aux = aux->get_next();
    ++i;
  }
  aux = get_head()->get_next();
  for (int j = 0; j < i - 2; j++) {
    lista.push_front(new SllPolyNode(aux->get_data()));
    aux = aux->get_next();
  }

  while (!lista.empty()) {
    pair_double_t nodo_aux = lista.pop_front()->get_data();
    result.push_front(new SllPolyNode(nodo_aux));
  }
  return result;
}

#endif  // SLLPOLYNOMIAL_H_
