#include <iostream>
using namespace std;

int main() {
  cout << "Vamos a decir las horas, minutos y segundos de un numero natural"
       << endl;
  cout << endl;

  int n;  // numero natural
  int h;  // horas
  int m;  // minutos
  int s;  // segundos
  int t;

  cout << "Introduzca un numero natural: ";
  cin >> n;

  s = n % 60;
  t = n / 60;
  m = t % 60;
  h = t / 60;

  if (n >= 0 && m < 60 && s < 60) {
    cout << "Horas----Minutos----Segundos" << endl;
    cout << "  " << h << "          " << m << "          " << s << endl;

  } else {
    cout << "No ha introducido un numero natural." << endl;
  }

  return 0;
}
