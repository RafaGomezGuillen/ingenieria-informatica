#include <stdio.h>

#include <iostream>
using namespace std;

void cambio(int *a, short *b, float *c, long *d) {
  int aux, aux2;

  aux = *a;
  *a = *b;
  *b = aux;

  aux2 = *c;
  *c = *d;
  *d = aux2;
}

int main() {
  int x;
  short y;
  float z;
  long k;
  void cambio(int *a, short *b, float *c, long *d);

  cout << "Vamos a declar 4 variables de difrentes tipos y referenciar los "
          "valores de esas variables. "
       << endl;
  cout << endl;

  x = 1;
  y = 2;
  z = 3.1;
  k = 1000;

  cout << "Le he dado el valor de x: " << x << endl;
  cout << "Le he dado el valor de y: " << y << endl;
  cout << "Le he dado el valor de z: " << z << endl;
  cout << "Le he dado el valor de k: " << k << endl;

  cambio(&x, &y, &z, &k);

  cout << "Ahora el valor de x es: " << x << endl;
  cout << "Ahora el valor de y es: " << y << endl;
  cout << "Ahora el valor de z es: " << z << endl;
  cout << "ahora el valor de k es: " << k << endl;

  return 0;
}

