#include <iostream>
using namespace std;

int main() {
  float c1, c2, c3, formula;

  cout << "Introduzca la primera nota: " << endl;
  cin >> c1;

  cout << "Introduzca la segunda nota: " << endl;
  cin >> c2;

  cout << "Introduzca la tercera nota: " << endl;
  cin >> c3;

  formula = (c1 + c2 + c3) / 3;

  if (formula >= 0.0 && formula <= 10.0) {
    string estudiante;

    cout << "Introduzca su nombre: " << endl;
    cin >> estudiante;

    cout << "El promedio del estudiante " << estudiante
         << " de las tres notas es: " << formula << endl;

  } else {
    cout << "La calificacion introducida no esta dentro de los valores pedidos"
         << endl;
  }

  return 0;
}
