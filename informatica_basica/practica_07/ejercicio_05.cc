/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Triangle
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that adds one second to a clock time, given its hours,
 * minutes and seconds.
 */
#include <iomanip>
#include <iostream>
using namespace std;

void IntroducirCerosAntesDeNumero(int *horas, int *minutos, int *segundos) {
  cout.fill('0');
  cout << setw(2) << *horas << ":" << setw(2) << *minutos << ":" << setw(2)
       << *segundos << endl;
}
void IntroducirCero(int *horas, int *minutos, int *segundos) {
  if (*segundos == 59) {
    if (*minutos == 59) {
      if (*horas == 23)
        *horas = 0;
      else
        (*horas)++;
      *minutos = 0;
      *segundos = 0;
    } else {
      (*minutos)++;
      *segundos = 0;
    }
  } else {
    (*segundos)++;
  }
}
int main() {
  int hh, mm, ss;
  cout << "";  // Introduzca horas
  cin >> hh;
  cout << "";  // Introduzca minutos
  cin >> mm;
  cout << "";  // Introduzca segundos
  cin >> ss;
  IntroducirCero(&hh, &mm, &ss);  // si es menor que 10 introducir cero
  IntroducirCerosAntesDeNumero(&hh, &mm, &ss);
  return 0;
}