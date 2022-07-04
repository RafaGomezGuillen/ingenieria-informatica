#include <iostream>
using namespace std;

int main() {
  int temperatura;  // hace calor si la temperatura es mayor que 30; hace frio
                    // si es menor que 10; entre estos dos valores es ok; el
                    // agua hierve a mas de 100 grados; y se congela a 0 o menos

  cout << "Vamos a introducir un numero que represente una temperatura y que "
          "diga si hace frio, calor, o esta bien; ademas de decir si hierve o "
          "no el agua."
       << endl;
  cout << endl;

  cout << "Intruduce la temperatura: ";
  cin >> temperatura;

  if (temperatura < 30 && temperatura > 10) {
    cout << "Es ok." << endl;
  }

  if (temperatura >= 30 && temperatura <= 99) {
    cout << "Hace calor." << endl;
  }

  if (temperatura <= 10 && temperatura >= 0) {
    cout << "Hace frio." << endl;
  }

  if (temperatura >= 100) {
    cout << "Hace calor, y el agua hierviria." << endl;
  }

  if (temperatura < 0) {
    cout << "Hace frio, y el agua se congelaria." << endl;
  }

  return 0;
}
