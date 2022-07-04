#include <iostream>
using namespace std;

int main() {
  char letra;

  cout << "Vamos a pasar de minuscula a mayuscula y viceversa." << endl;
  cout << endl;

  cout << "Introduzca una letra: ";
  cin >> letra;

  if (letra >= 'a' && letra <= 'z') {
    char mayuscula;
    mayuscula = letra - 32;
    cout << "Tu letra en mayuscula es: " << mayuscula << endl;
  } else {
    char minuscula;
    minuscula = letra + 32;
    cout << "Tu letra en minuscula es: " << minuscula << endl;
  }
}
