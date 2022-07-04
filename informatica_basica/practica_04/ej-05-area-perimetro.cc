#include <iostream>
using namespace std;
int main() {
  float lado, perimetro, area;
  cout << "Introduzca la longitud del lado del cuadrado: ";
  cin >> lado;
  area = lado * lado;
  perimetro = lado * 4;
  cout << "El área del caudrado es: " << area << endl;
  cout << "El perímetro del cuadrado es: " << perimetro << endl;
  return 0;
}
