/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Descifrar los mensajes secretos de los centuriones romanos es muy
 *        fácil, especialmente si el destinatario de ellos es el César.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
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

#include <iostream>
using namespace std;

char Codificar(char c, int k) {
  if (c == '_')
    return ' ';
  else if (c == '.')
    return '\n';
  if (c <= 'z' and c >= 'a') {
    k = k % ('z' - 'a' + 1);
    c -= 'a';
    c += k;
    c = c % ('z' - 'a' + 1);
    c += 'A';
  }
  return c;
}

int main() {
  int k;
  while (cin >> k) {
    char c = 'a';
    while (c != '.') {
      cin >> c;
      cout << Codificar(c, k);
    }
  }
}