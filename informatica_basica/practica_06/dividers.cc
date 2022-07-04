#include <iostream>
using namespace std;

int main() {
  int numero;
  int i;

  cout << "Vamos a imprimir en pantalla los divisores de un numero." << endl;
  cout << endl;

  do {
    cout << "Introduzca un numero: ";
    cin >> numero;
  } while (numero <= 0);

  for (i = 1; i <= numero / 2; i++) {
    if (numero % 1 == 0) {
      cout << " " << i;
    }
  }

  cout << " " << numero << endl;

  return 0;
}
