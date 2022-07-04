/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Parentheses
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses
 * close correctly.
 */

#include <iostream>
#include <string>
using namespace std;

bool isBalanced(string parentesis) {
  bool chequeo = true;
  int count = 0;

  for (int i = 0; parentesis[i] != '\0'; i++) {
    if (parentesis[i] == '(') {
      count++;
    } else {
      count--;
    }
    if (count < 0) {
      chequeo = false;
      break;
    }
  }
  if (count != 0) {
    chequeo = false;
  }
  return chequeo;
}

int main() {
  string parentesis;
  cin >> parentesis;

  if (isBalanced(parentesis)) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
  return 0;
}