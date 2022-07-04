#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  cout << "Vamos a declarar un vector e inicializarlos en el rango [0.0, "
          "10.0]. Ademas de decir su valor medio, minimo y maximo."
       << endl;
  cout << endl;

  int i, num;
  srand(time(NULL));
  int kvectorsize;
  float total = 0.0f;
  float promedio = 0.0f;  // valor medio
  float mayor = 0.0f;     // maximo
  float menor = 0.0f;     // minimo

  cout << "Introduzca el tamaño del vector: ";
  cin >> kvectorsize;

  for (i = 0.0; i <= kvectorsize; i++) {
    num = i + rand() % (kvectorsize + 1 - i);
    cout << num << "" << endl;
    total += num;

    if (i == 0) {
      mayor = menor;
      menor = num;

    } else {
      if (num > mayor) mayor = num;
      if (num < menor) menor = num;
    }
  }
  promedio = total / num;
  cout << "El valor medio es: " << promedio << endl;
  cout << "El maximo es: " << mayor << endl;
  cout << "El minimo es: " << menor << endl;
  return 0;
}
