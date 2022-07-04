/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio:  Harmonic numbers (1)
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that reads a number n and prints the n-th harmonic
 * number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
 */

#include <bits/stdc++.h>

#include <iomanip>
#include <iostream>
using namespace std;

double FuncionHarmonic(int n) {
  double Harmonic = 0.0000;
  for (double i = 1; i <= n; i++) Harmonic = Harmonic + 1 / i;
  return Harmonic;
}
int main() {
  int numero_a_calular;
  cin >> numero_a_calular;
  if (numero_a_calular != 0) {
    cout << fixed << setprecision(4) << FuncionHarmonic(numero_a_calular)
         << endl;
  } else {
    cout << "0.0000" << endl;
  }
  return 0;
}