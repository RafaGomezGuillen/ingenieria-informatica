#include <iostream>
using namespace std;

int main() {
  cout << "Vamos a introudcir un nuemro natural y sumar sus ultimos tres "
          "digitos."
       << endl;
  cout << endl;

  int numero_natural;
  int suma = 0, digito1, digito2, digito3;
  cout << "Introduzca un numero natural: ";
  cin >> numero_natural;

  if (numero_natural > 0) {
    digito1 = numero_natural % 10;
    numero_natural = numero_natural / 10;
    digito2 = numero_natural % 10;
    numero_natural = numero_natural / 10;
    digito3 = numero_natural % 10;
    numero_natural = numero_natural / 10;

    cout << "La suma de los tres ultimos digitos es: "
         << digito1 + digito2 + digito3 << endl;
  } else {
    cout << "No ha introducido un numero natural" << endl;
  }

  return 0;
}
