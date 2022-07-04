#include <iostream>
using namespace std;

int main() {
  int numero_natural, suma = 0;

  cout << "Vamos a sumar todos los digitos de un numero natural." << endl;
  cout << endl;

  cout << "Introduzca un numero natural: ";
  cin >> numero_natural;

  if (numero_natural > 0) {
    while (numero_natural > 0) {
      suma = suma + numero_natural % 10;
      numero_natural = numero_natural / 10;
    }

    cout << "La suma de todos los digitos es: " << suma << endl;

  } else {
    cout << "No ha introducido un numero natural" << endl;
  }

  return 0;
}
