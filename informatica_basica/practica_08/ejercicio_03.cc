/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Primality
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief  Write a program that reads a sequence of natural numbers and, for
 * each one, tells if it is a prime number or not. Remember that a natural
 * number is prime if and only if it is greater than 1 and it does not have any
 * positive divisor other than 1 and itself.
 */

#include <iostream>
using namespace std;

int main() {
  int size;
  cin >> size;  // tamaño del array

  int *array, i, j, f, n;
  array = new int[size];  // declaro el array con su tamaño

  for (i = 0; i < size; i++) {
    cin >> array[i];  // numeros a calcular
  }
  for (i = 0; i < size; i++) {
    n = array[i];
    f = 0;
    for (j = 2; j < n; j++) {
      if (n % j == 0) {
        f = 1;
        break;
      }
    }
    if (f == 0) {
      cout << array[i] << " is prime" << endl;
    } else {
      cout << array[i] << " is not prime" << endl;
    }
  }

  return 0;
}