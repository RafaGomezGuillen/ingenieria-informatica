#include <iostream>
using namespace std;

int main() {
  int b5 = 5, b10 = 10, b20 = 20, b50 = 50, b100 = 100, b200 = 200, b500 = 500;
  float m1 = 0.01, m5 = 0.05, m20 = 0.20, m50 = 0.50;

  cout << "Introduzca la cantidad de billetes de 5 euros: ";
  cin >> b5;

  cout << "Introduzca la cantidad de billetes de 10 euros: ";
  cin >> b10;

  cout << "Introduzca la cantidad de billetes de 20 euros: ";
  cin >> b20;

  cout << "Introduzca la cantidad de billetes de 100 euros: ";
  cin >> b100;

  cout << "Introduzca la cantidad de billetes de 200 euros: ";
  cin >> b200;

  cout << "Introduzca la cantidad de billetes de 500 euros : ";
  cin >> b500;

  cout << "Introduzca la cantidad de monedas de 1 centimo: ";
  cin >> m1;

  cout << "Introduzca la cantidad de monedas de 5 centimos: ";
  cin >> m5;

  cout << "Introduzca la cantidad de monedas de 20 centimos: ";
  cin >> m20;

  cout << "Introduzca la cantidad de monedas de 50 centimos: ";
  cin >> m50;

  cout << "Tu cantidad de dinero es: "
       << b5 * 5 + b20 * 20 + b50 * 50 + b100 * 100 + b500 * 500 + m1 * 0.01 +
              m5 * 0.05 + m20 * 0.20 + m50 * 0.50
       << " euros." << endl;
  
  return 0;
}