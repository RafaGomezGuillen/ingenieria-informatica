/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: How many seconds are they?
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 *
 * @brief Write a program that converts to seconds a given amount of years,
 * days, hours, minutes and seconds.
 */

#include <iostream>
using namespace std;

int func_segundos(int y, int d, int h, int m, int s) {
  y = y * 31536000;  // years a segundos
  d = d * 86400;     // dias a segundos
  h = h * 3600;      // horas a segundos
  m = m * 60;        // minutos a segundos
  s = s * 1;         // segundos

  return y + d + h + m + s;
}
int main() {
  int years, dias, horas, minutos, segundos;
  int suma;

  cout << "";  // Introduzca el year
  cin >> years;
  cout << "";  // Introduzca dias
  cin >> dias;
  cout << "";  // Introduzca horas
  cin >> horas;
  cout << "";  // Introduzca minutos
  cin >> minutos;
  cout << "";  // Introduzca segundos
  cin >> segundos;
  suma = func_segundos(years, dias, horas, minutos, segundos);
  cout << "" << suma << endl;
  return 0;
}
