#include <iostream>
using namespace std;

int main() {
  int numeros[] = {sizeof(int),  sizeof(float), sizeof(double),
                   sizeof(long), sizeof(short), sizeof(char)};
  int i, j, aux;

  cout << "Vamos a imprimir en pantalla la cantidad de bytes que pesa algunos "
          "tipos basicos del lenguaje."
       << endl;

  cout << "El valor de sizeof(int) = " << sizeof(int) << endl;
  cout << "El valor de sizeof(float) = " << sizeof(float) << endl;
  cout << "El valor de sizeof(double) = " << sizeof(double) << endl;
  cout << "El valor de sizeof(long) = " << sizeof(long) << endl;
  cout << "El valor de sizeof(short) = " << sizeof(short) << endl;
  cout << "El valor de sizeof(char) = " << sizeof(char) << endl;

  for (i = 0; i < 6; i++) {
    for (j = 0; j < 6; j++) {
      if (numeros[j] > numeros[j + 1]) {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }
  cout << "De manera en orden ascendente: ";
  for (i = 0; i < 6; i++) {
    cout << numeros[i] << endl;
  }

  return 0;
}