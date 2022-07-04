#include <iostream>
using namespace std;

int main() {
  int A, B;

  cout << "Vamos a comprobar que los operadores 'and' y 'or'utilizan circuitos "
          "cortos."
       << endl;
  cout << endl;

  A = 1;
  B = 0;

  cout << "(A || B) = " << (A || B) << endl;
  cout << "(A && B) = " << (A && B) << endl;

  cout << "Ahora vamos  juntar ambas operaciones." << endl;
  cout << endl;

  cout << "(A || B || A && B) =" << (A || B || A && B) << endl;
  cout << "(A || B && A && B) =" << (A || B && A && B) << endl;
  cout << endl;
  cout << "Observamos que al se (A || B) verdadero, no se evalua (A && B)."
       << endl;

  return 0;
}