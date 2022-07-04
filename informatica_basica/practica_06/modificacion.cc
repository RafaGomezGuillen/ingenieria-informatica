#include <iostream>
using namespace std;

int main() {
  cout << "Desarrolle en C++ un programa que calcule la suma de todos los "
          "múltiplos de 3 o 5 menores que n."
       << endl;
  cout << endl;

  int suma = 0;  // suma
  int n = 1000;  // menores que 1000
  int i;

  for (i = 0; i < n; i++) {
    if (3 * i < n) suma += 3 * i;
    if (5 * i < n && (5 * i) % 3 != 0) suma += 5 * i;
  }
  cout << "La suma de todos los múltiplos de 3 o 5 menores que" << n
       << " es: " << suma << endl;
  return 0;
}
