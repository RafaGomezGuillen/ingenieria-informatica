/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Statistical measures
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief  Escriba un programa que lea secuencias no vacías de números reales y,
 *         para cada secuencia, imprima su mínimo, su máximo y su promedio.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

/*
 * @param int: La entrada consta de un número natural n , seguido de n
 * secuencias. Cada secuencia comienza con el número de elementos m > 0, seguido
 * de m números reales.
 * @return minimo, maximo, promedio / m: Para cada secuencia, imprima en una
 * línea y con cuatro dígitos después del punto decimal su mínimo, su máximo y
 * su promedio.
 */

int main() {
  cout.setf(ios::fixed);
  cout.precision(4);

  int numero_natural;
  cin >> numero_natural;  // numero natural para detmeniar el tamaño de la
                          // sequencia
  for (int i = 0; i < numero_natural; ++i) {
    int m;
    cin >> m;
    double sequencia_1, sequencia, maximo, minimo, promedio;
    cin >> sequencia_1;  
    minimo = sequencia_1;
    maximo = sequencia_1;
    promedio = sequencia_1;
    for (int j = 1; j < m; ++j) {
      cin >> sequencia;
      if (sequencia < minimo) minimo = sequencia;
      if (sequencia > maximo) maximo = sequencia;
      promedio += sequencia;
    }
    cout << minimo << ' ' << maximo << ' ' << promedio / m << endl;
  }
}