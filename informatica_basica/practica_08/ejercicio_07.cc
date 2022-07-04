/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio:   First position
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that reads a sequence of natural numbers and prints
 * the position of the first even number.
 */
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
template <typename elementType>
bool IsEven(const elementType& number) {
  return ((number % 2) == 0);
}

int main() {
  vector<int> v;
  int nNum;
  // cout << "Introduzca la sequencia de numeros: ";
  while (cin >> nNum) {
    v.push_back(nNum);
  }
  vector<int>::const_iterator i;
  vector<int>::iterator iEvenNumber;
  iEvenNumber = find_if(v.begin(), v.end(), IsEven<int>);  // encontar posicion

  if (iEvenNumber != v.end()) {
    cout << distance(v.begin(), iEvenNumber + 1)
         << endl;  // se suma una posicion porque los vectores empiezan desde 0
  }
  return 0;
}