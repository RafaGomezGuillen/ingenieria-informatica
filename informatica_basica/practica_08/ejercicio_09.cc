/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Approximation of e
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that, for every given natural number n, prints the
 * approximation of e that we get by adding the n first terms of the series
 * above.
 */

#include <bits/stdc++.h>

#include <iomanip>
#include <iostream>
using namespace std;

float exponential(int n, float x) {
  float sum = 1.0f;
  for (int i = n - 1; i > 0; --i) sum = 1 + x * sum / i;
  return sum;
}

int main() {
  int numero_a_aproximar;
  float x = 1.0f;
  while (cin >> numero_a_aproximar) {
    if (numero_a_aproximar != 0) {
      cout << "With " << numero_a_aproximar << " term(s) we get " << fixed
           << setprecision(10) << exponential(numero_a_aproximar, x) << "."
           << endl;
    } else {
      cout << "With 0 term(s) we get 0.0000000000." << endl;
    }
  }
  return 0;
}
