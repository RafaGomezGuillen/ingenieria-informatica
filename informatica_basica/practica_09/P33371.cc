/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * Nombre del ejercicio: Caesar cipher
 * @author Rafael Gomez Guilen alu0101462578
 * @date 06/12/2021
 *
 * @brief  Escribe un programa que encripte mensajes con el "cifrado César",
 *         utilizado por Julio César para comunicarse con sus generales. Dada
 * una constante k, cada letra del mensaje original se reemplaza por la letra
 * que está alfabéticamente k posiciones a su derecha.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p09_funciones2-RafaelGomezGuillen
 */

#include <iostream>
using namespace std;

/*
 * @param char: La entrada consta de varios casos. Cada caso comienza con un
 * número natural k > 0, seguido de un texto compuesto solo por letras
 * minúsculas y caracteres separadores, pero sin espacios, y termina con un
 * punto.
 * @return Para cada caso, imprima en una línea el texto encriptado, utilizando
 * letras mayúsculas. Reemplace cada ' _ ' con un espacio y deje sin cambios el
 * resto de los caracteres separadores.
 */

char encoded(char c, int k) { return (char)(((c - 'a' + k) % 26) + 'A'); }

int main() {
  int n;
  char c = 'a';

  cin >> n;

  while (cin >> c) {
    if (c == '_') {
      cout << ' ';
    } else if (c == '.') {
      cout << endl;
      cin >> n;
    } else if ((64 < (int)c && (int)c < 91) || (96 < (int)c && (int)c < 123)) {
      if (!(64 < (int)c && (int)c < 91)) {
        c = encoded(c, n);
      } else if (!(96 < (int)c && (int)c < 123)) {
        c = encoded(c, n);
      }
      cout << c;
    } else {
      cout << c;
    }
  }
}