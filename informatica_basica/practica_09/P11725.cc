/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Sequential search in an array
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief Escribe una funcion que dice si un numero natural x esta presente en
 *        un vector de un numero natural v
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */
#include <iostream>
#include <set>
#include <vector>
using namespace std;

typedef set<int> SE;
typedef SE::iterator SI;

/*
 * @param bool: busca el numero entero x desde las posiciones más bajas.
 * @return encontrado: dice si el número entero x está presente en el vector de
 * números enteros v .
 */

bool exists(int x, const vector<int>& V) {
  bool encontrado = false;
  int i = 0;

  while (!encontrado && i < V.size()) {
    if (x == V[i]) encontrado = true;
    i++;
  }
  return encontrado;
}

int main() {
  int n;  // numero natural "n"
  while (cin >> n) {
    vector<int> V(n);
    SE S;
    for (int i = 0; i < n; ++i) {
      cin >> V[i];
      S.insert(V[i]);
    }
    vector<int> A(S.begin(), S.end());
    int m = A.size();

    cout << exists(1234, V) << endl;
    cout << exists(-1000000, V) << endl;

    if (n < 100) {
      for (int i = 0; i < m; ++i) cout << exists(A[i], V) << endl;
      for (int i = 1; i < m; ++i)
        cout << exists((A[i] + A[i - 1]) / 2, V) << endl;
    } else
      for (int rep = 1000; rep > 0; --rep)
        for (int i = 0; i < m; ++i) cout << exists(A[i], V) << endl;
  }
  return 0;
}