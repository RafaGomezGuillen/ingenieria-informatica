#include <iostream>
using namespace std;

int main() {
  int variable_1, variable_2;
  float suma, resta, multiplacion, division;  // operadores aritmeticos.
  bool igualdad, distinto, mayor_que, menor_que, mayor_o_igual_que,
      menor_o_igual_que;  // operadores de comparacion.

  cout << "Vamos a declarar variables de tipo aritmeticos y operar esas "
          "variables con operadores de comparacion y artimeticos."
       << endl;
  cout << endl;

  variable_1 = 7;
  variable_2 = 3;

  suma = variable_1 + variable_2;
  resta = variable_1 - variable_2;
  multiplacion = variable_1 * variable_2;
  division = variable_1 / variable_2;
  igualdad = variable_1 == variable_2;
  distinto = variable_1 != variable_2;
  mayor_que = variable_1 > variable_2;
  menor_que = variable_1 < variable_2;
  mayor_o_igual_que = variable_1 >= variable_2;
  menor_o_igual_que = variable_1 <= variable_2;

  cout << "El valor de variable_1 es: " << variable_1 << endl;
  cout << "El valor de variable_2 es: " << variable_2 << endl;
  cout << endl;
  cout << "La suma de variable_1 y variable_2 es: " << suma << endl;
  cout << "La resta de variable_1 y variable_2 es: " << resta << endl;
  cout << "La multiplicacion de variable_1 y variable_2 es: " << multiplacion << endl;
  cout << "La division de variable_1 y variable_2 es: " << division << endl;
  cout << "La igualdad de variable_1 y variable_2 es: " << igualdad << endl;
  cout << "variable_1 > variable_2: " << mayor_que << endl;
  cout << "variable_1 < variable_2: " << menor_que << endl;
  cout << "variable_1 >= variable_2: " << mayor_o_igual_que << endl;
  cout << "variable_1 <= variable_2: " << menor_o_igual_que << endl;

  return 0;
}