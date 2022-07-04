/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio:  Harmonic numbers (2)
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that reads pairs of numbers n and m with n ≥ m, and
 * for each pair prints Hn − Hm.
 */
#include <bits/stdc++.h>

#include <iomanip>
#include <iostream>
using namespace std;

double FuncionHarmonic(int n) {
  double Harmonic = 0.0000000000;
  for (double i = 1; i <= n; i++) Harmonic = Harmonic + 1 / i;
  return Harmonic;
}
double FuncionHarmonic2(int m) {
  double Harmonic = 0.0000;
  for (double i = 1; i <= m; i++) Harmonic = Harmonic + 1 / i;
  return Harmonic;
}

int main() {
  int numero1, numero2;
  while (cin >> numero1 && cin >> numero2) {
    if (numero1 >= numero2) {
      cout << fixed << setprecision(10)
           << FuncionHarmonic(numero1) - FuncionHarmonic2(numero2) << endl;
    } else {
      cout << "0.0000000000" << endl;
    }
  }
  return 0;
}