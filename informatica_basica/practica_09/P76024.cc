/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Sum of franctions
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief  Escribe un programa que lea triples de números naturales a, b y k, y
 *         para cada uno calcule e imprima el resultado de para todas las
 * fracciones con denominador menor o igual que b.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

/*
 * @param int: La entrada consta de varios triples de números naturales a, byk,
 * de manera que 1 ≤ a≤ byk ≥ 1.
 * @return suma: Para cada triple, escriba en una línea el resultado de la suma
 * con cuatro dígitos después del punto decimal.
 */

int Funcion_SumOfFractions(double numero_a, double numero_b, double numero_k) {
  cout.setf(ios::fixed);
  cout.precision(4);
  double suma = 0;
  while (cin >> numero_a >> numero_b >> numero_k) {
    for (double i = 0; (numero_a + i * numero_k) <= numero_b; i++) {
      suma += 1 / (numero_a + i * numero_k);
    }
    cout << suma << endl;
  }
  return suma;
}

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  double numero_a, numero_b, numero_k;  // Tres numeros naturales
  cout << Funcion_SumOfFractions(numero_a, numero_b, numero_k) << endl;
  return 0;
}