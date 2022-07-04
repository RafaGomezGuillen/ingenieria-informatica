/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa que lea un fichero de texto que se le pase como
 *        parámetro y produzca como salida ficheros con nombre A.txt, B.txt,
 *        ..., Z.txt. Cada uno de esos ficheros ha de contener en líneas separadas
 *        todas las palabras del fichero pasado como parámetro que comiencen por la
 *        correspondiente letra.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include "leer_fichero.h"
using namespace std;

/** Convertir valor a string
 *
 *  @param[in] valor. El valor a valayr
 *  @return ch: string
 */

string ConverirString(int valor) {
  string ch;

  ostringstream Fichero;
  Fichero << valor;  
  ch = Fichero.str();

  return ch;
}

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv 
 */

int main(int argc, char *argv[]) {
  for (int i = 0; i < 26; i++) {
    string nombre = "a" + ConverirString(i) + ".txt";

    ofstream EscribirFichero(nombre.c_str());
    EscribirFichero.close();
  }
  return 0;
}
