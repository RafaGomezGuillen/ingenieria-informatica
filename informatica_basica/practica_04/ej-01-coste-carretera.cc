#include <iostream>
using namespace std;

int main () {
  float metros, coste;
  cout << "Introduzca la cantidad de metros de longitud que tiene la carretera: ";
  cin >> metros;
  coste = metros * 1624;
  cout << "El coste de la carretera es: " << coste << " euros." << endl;
  return 0;
}