/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Maximum of three integer numbers
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that reads three numbers and prints their maximum.
 * This exercise is slightly harder than P52847: “Maximum of three different
 * integer numbers”.
 */
#include <iostream>
using namespace std;

int fdivision(int num1, int num2) {
  if (num2 > 0) {
    int d, r;
    d = num1 / num2;  // division
  }
  return num1 / num2;
}

int fmodulo(int num1, int num2) {
  if (num2 > 0) {
    int r;
    r = num1 % num2;  // resto
  }
  return num1 % num2;
}

int main() {
  int numero1, numero2;
  int division, resto;
  cout << "";  // Introduzca el primero numero
  cin >> numero1;
  cout << "";  // Introduzca el segundo numero
  cin >> numero2;
  division = fdivision(numero1, numero2);  // division
  resto = fmodulo(numero1, numero2);       // resto
  cout << "" << division << " " << resto << endl;
  return 0;
}