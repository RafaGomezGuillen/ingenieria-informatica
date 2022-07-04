#include <iostream>
using namespace std;

int main() {
  cout << "Vamos a imprimir en pantalla un cuadrado de asteriscos" << endl;
  cout << endl;

  int n;  // cuadrado

  cout << "Introduzca el tamaño del cuadrado: ";
  cin >> n;
  cout << endl;

  for (int i = 1; i <= n; i++)  // filas
  {
    for (int j = 1; j <= n; j++)  // columnas
    {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
