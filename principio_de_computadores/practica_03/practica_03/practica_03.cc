#include <cmath>
#include <iostream>
using namespace std;

int main() {
  cout << "PR3 aproinputimacion por serie geometrica" << endl;
  do {
    float x = 1;
    while (x >= 1 || x <= -1) {
      cout << "Introduzca el valor de input (|x|<1): ";
      cin >> x;
    }
    if (x == 0) break;
    float valor_real;
    valor_real = 1 / (1 + x);
    cout << "Resultado real = " << valor_real << endl;
    float error_objetivo = 1;
    while (error_objetivo < 0 || error_objetivo > valor_real) {
      cout << "Introduzca el error objetivo: ";
      cin >> error_objetivo;
    }
    float error = 1;
    float sumatorio = 1;
    int termino = 1;
    float termino_acumulado, error_acumulado = -1;
    termino_acumulado = x;
    while (error > error_objetivo) {
      sumatorio += error_acumulado * termino_acumulado;
      error = fabs(sumatorio - valor_real);
      termino_acumulado *= x;
      error_acumulado *= -1;
      termino++;
    }
    cout << "\nResultado calculado para " << termino << " terminos = " << sumatorio << endl;
    cout << "Error cometido para " << termino << " terminos = " << error << endl;
  } while (true);
  cout << "FIN DEL PROGRAMA. " << endl;
}

  
 
