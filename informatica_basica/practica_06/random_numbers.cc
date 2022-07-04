#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
  cout << "Vamos a tomar de entrada dos numeros naturales y generar un numero "
          "aleatorio entre los rangos de esos numeros introducidos"
       << endl;
  cout << endl;

  int n;  // primero numero natural
  int m;  // segundo numero natural

  cout << "Introduzca el primer numero natural: ";
  cin >> n;
  cout << "Introduzca el segundo numero natural: ";
  cin >> m;

  if (n < m && m > 0 && n > 0) {
    int num, c;
    srand(time(NULL));

    for (c = 1; c <= 10; c++) {
      num = n + rand() % (m + 1 - n);

      cout << num << "" << endl;
    }

  } else {
    cout << "Los numeros introducidos no son naturales o no cumplen el "
            "intervalo [n,m],es decir, n<m"
         << endl;
  }

  return 0;
}
