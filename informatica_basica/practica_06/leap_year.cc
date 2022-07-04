#include <iostream>
using namespace std;

int main() {
  cout << "Vamos a calcular si el año introducido es o no bisiesto." << endl;
  cout << endl;

  int fecha;

  cout << "Intruduzca el año a calcular: ";
  cin >> fecha;

  if (fecha % 4 != 0 || (fecha % 100 == 0 && fecha % 400 != 0)) {
    cout << "El año introducido no es bisiesto" << endl;

  } else {
    cout << "El año introducido es bisiesto" << endl;
  }

  return 0;
}
