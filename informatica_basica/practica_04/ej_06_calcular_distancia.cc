#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int x1, y1, z1, x2, y2, z2;

  cout << "Introduzca el punto x de A: ";
  cin >> x1;

  cout << "Introduzca el punto y de A: ";
  cin >> y1;

  cout << "Introduzca el punto z de A: ";
  cin >> z1;

  cout << "Introduzca el punto x de B: ";
  cin >> x2;

  cout << "Introduzca el punto y de B: ";
  cin >> y2;

  cout << "Introduza el punto z de B: ";
  cin >> z2;

  cout << "La distancia es: " << sqrt((x2 - x1) + (y2 - y1) + (z2 - z1))
       << endl;
  
  return 0;
}
