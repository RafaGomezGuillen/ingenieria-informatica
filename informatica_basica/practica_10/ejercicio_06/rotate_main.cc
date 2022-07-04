/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa rotate que rote las vocales en minúscula que
 *        encuentre en el fichero que se le pasa como parámetro
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <bits/stdc++.h>

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

#include "rotate.h"
using namespace std;

/** Retorna las vocales 
 *
 *  @param[in] c. Defino las vocales.
 *  @return vocales
 */

bool isVowel(char c) {
  c = toupper(c);
  return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

/** Evalua las vocales y mide la longitud de4 la cadena de texto para
 * intercambiar una a una las vocales
 *
 *  @param[in] str. La cadena de texto a evaluar
 *  @return str: intercambia la vocales
 */

string reverseVowel(string str) {
  int i = 0;
  int j = str.length() - 1;
  while (i < j) {
    if (!isVowel(str[i])) {
      i++;
      continue;
    }
    if (!isVowel(str[j])) {
      j--;
      continue;
    }
    swap(str[i], str[j]);

    i++;
    j--;
  }

  return str;
}

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero (Fichero.txt)
 */

int main(int argc, char* argv[]) {
  string linea;
  ifstream Fichero;
  ofstream Fichero_Rotate("Fichero_rotate.txt");
  Fichero.open(argv[1]);

  if (Fichero_Rotate.is_open()) {
    if (Fichero.is_open()) {
      while (getline(Fichero, linea)) {
        Fichero_Rotate << reverseVowel(linea) << endl;
      }
    } else {
      cerr << "No se ha podido abrir Fichero.txt" << endl;
    }
  } else {
    cerr << "No se ha podido abrir Fichero_rotate.txt" << endl;
  }
  return 0;
}


