/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Elementos.
 * Correo: alu0101462578@ull.edu.es
 * Autor: Rafael Gomez Guillen
 * @brief El agua (A) vence a la piedra (P) que a su vez vence al viento (V) que
 * vence al agua. Di quien gana el enfrentamiento, o si se produce un empate.
 */
#include <iostream>
using namespace std;

const char agua = 'A';
const char piedra = 'P';
const char viento = 'V';

void EleccionGanador(char eleccion1, char eleccion2) {
  if (eleccion1 == 'A' && eleccion2 == 'V') {
    cout << "2" << endl;
  } else if (eleccion1 == 'V' && eleccion2 == 'A') {
    cout << "1" << endl;
  } else if (eleccion1 == 'A' && eleccion2 == 'P') {
    cout << "1" << endl;
  } else if (eleccion1 == 'P' && eleccion2 == 'A') {
    cout << "2" << endl;
  } else if (eleccion1 == 'P' && eleccion2 == 'V') {
    cout << "1" << endl;
  } else if (eleccion1 == 'V' && eleccion2 == 'P') {
    cout << "2" << endl;
  } else {
    cout << "-" << endl;
  }
}
int main() {
  const char agua = 'A';
  const char piedra = 'P';
  const char viento = 'V';
  char opcion1, opcion2;
  cout << "";  // Introduzca elelemento 1
  cin >> opcion1;
  cout << "";  // Introduzca elemento 3
  cin >> opcion2;
  EleccionGanador(opcion1, opcion2);
  return 0;
}
