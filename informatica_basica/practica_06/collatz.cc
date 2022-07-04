#include <iostream>
using namespace std;

void collatz(int n) {
  cout << n << " ";
  if (n > 1) {
    if (n % 2 == 0) {
      collatz(n / 2);
    } else {
      collatz(n + n + n + 1);
    }
  }
}

int main() {
  cout << "Vamos a hacer que un numero entero entregue la secuencia de collatz"
       << endl;
  cout << endl;

  int n;  // numero entero

  cout << "Introduzca un numero entero: ";
  cin >> n;

  if (n > 0) {
    collatz(n);
    cout << endl;
  } else {
    cout << "El numero introducido no es un numero entero." << endl;
  }

  return 0;
}
