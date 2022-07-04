/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Maximum of three intenger numbers
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 * @brief Vamos a declarar tres numeros e imprimir su maximo
 */

#include <iostream>
using namespace std;

int func_maximo(int num1, int num2, int num3) {
  if (num1 > num2) {
    if (num1 > num3)  // comparo a y c
      return num1;
    else
      return num3;
  } else {
    if (num2 > num3)  // comparo b y c
      return num2;
    else
      return num3;
  }
}

int main() {
  int numero1, numero2, numero3;  // numeros naturales
  int maximo;
  cout << "";  // Introduzca el numero 1
  cin >> numero1;
  cout << "";  // Introduzca el numero 2
  cin >> numero2;
  cout << "";  // Introduzca el numero 3
  cin >> numero3;
  maximo = func_maximo(numero1, numero2, numero3);
  cout << maximo << endl;
  return 0;
}