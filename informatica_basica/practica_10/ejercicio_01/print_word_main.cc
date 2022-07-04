/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa que imprima en pantalla la palabra con mayor
 *        número de vocales y la palabra con el mayor número de consonantes
 *        (independientemente de si se trata de mayúsculas o minúsculas) que se
 *        encuentren en el fichero de texto que se le pase como parámetro.
 * @bug no hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <bits/stdc++.h>

#include <cstdlib>  /// exit
#include <fstream>  // For the file streams
#include <iostream>
#include <string>

#include "print_word.h"
using namespace std;

/** Retorna las vocales y consonantes
 *
 *  @param[in] ch. Defino las consonantes y vocales.
 *  @return Las consonantes y vocales
 */

bool isVowel(char ch) {
  ch = toupper(ch);
  return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

bool isConsonant(char ch) {
  ch = toupper(ch);

  return !(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') &&
         ch >= 65 && ch <= 90;
}

/** Cuenta las consonsonates y vocales  de la cadena de texto y luego define la
 * palabra que mas contiene
 *
*/

int countVowels(string str) {
  int count = 0;
  int j = str.length();

  string mostConsonant;
  for (int i = 0; i < j; i++)
    if (isVowel(str[i])) ++count;
  return count;
}

int totalConsonants(string str) {
  int count = 0;
  int j = str.length();
  for (int i = 0; i < j; i++)
    if (isConsonant(str[i])) ++count;
  return count;
}

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero (Palabras.txt)
 */

int main(int argc, char* argv[]) {
  string linea;
  ifstream Fichero;
  ofstream Fichero2("Fichero2.txt");
  Fichero.open(argv[1]);

  if (Fichero2.is_open()) {
    if (Fichero.is_open()) {
      while (getline(Fichero, linea)) {
        Fichero2 << countVowels(linea) << endl;
        Fichero2 << totalConsonants(linea) << endl;
      }
    } else {
      cerr << "No se ha podido abrir Fichero.txt" << endl;
    }
  } else {
    cerr << "No se ha podido abrir Fichero_rotate.txt" << endl;
  }
  return 0;
}
