/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Balanced numbers
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Escribe una función que diga si un número natural n está equilibrado
 *        o no.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

/*
 * @param bool: Es un numero natrural "n" ha ser comprobado.
 * @return sum_par == sum_impar: Comprueba si un número natural está equilibrado
 * si la suma de los dígitos en las posiciones pares es igual a la suma de los
 * dígitos en las posiciones impares.
 */

bool is_balanced(int n) {
  int sum_par, sum_impar, digito;
  sum_par = sum_impar = 0;

  for (int i = 0; n != 0; ++i) {
    digito = n % 10;
    if (i % 2 == 0)
      sum_par += digito;
    else
      sum_impar += digito;
    n /= 10;
  }
  return (sum_par == sum_impar);
}

int main() {
  int n;  // numero natural "n" ha ser comprobado
  while (cin >> n) cout << is_balanced(n) << endl;
}
