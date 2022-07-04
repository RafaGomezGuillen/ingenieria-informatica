/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 13/12/2021
 * @brief Escriba un programa que tome como parámetro de entrada un fichero de texto 
          y escriba en un fichero de salida con la palabra más pequeña y la más grande
 * @bug no hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p10_files-RafaelGomezGuillen
 */
#include <fstream>  // For the file streams
#include <iostream> //cout...
#include <string> //string

using namespace std;

void ImprimirPalabraCortaLarga(string input, string &PalabraCorta, string &PalabraLarga) {
  int longitud = input.length();
  int si = 0, ei = 0;    
  int minimo_longitud = longitud, min_start_index = 0, maximo_longitud = 0, max_start_index = 0;
 
  while (ei <= longitud) {
    if (ei < longitud && input[ei] != ' ')
      ei++;
    
  else {
    // fin de una palabra
    // encontrar la longitud de la palabra actual
    int curr_length = ei - si;
    if (curr_length < minimo_longitud) {
      minimo_longitud = curr_length;
      min_start_index = si;
    }
    if (curr_length > maximo_longitud) {
      maximo_longitud = curr_length;
      max_start_index = si;
    }
      ei++;
      si = ei;
    }
  }
  // almacena palabras de longitud mínima y máxima
  PalabraCorta = input.substr(min_start_index, minimo_longitud);
  PalabraLarga = input.substr(max_start_index, maximo_longitud);
}

/** Main function
 *  @param[in] argc Número de parámetros de la línea de comando
 *  @param[in] argv Vector que contiene (char *) fichero_entrada 
 *   (Fichero_entrada.txt)
 */

int main(int argc, char* argv[]) {
  string linea;
  string PalabraCorta, PalabraLarga; 
  ifstream Fichero_entrada;
  ofstream Fichero_salida("Fichero_salida.txt");
  Fichero_entrada.open(argv[1]);

  /*Para que el ejercicio compile de manera corecta debe introducir
  * el comando: ./a.out Fichero_entrada.txt
  */
  
  if (Fichero_salida.is_open()) {
    if (Fichero_entrada.is_open()) {
      while (getline(Fichero_entrada, linea)) {
        ImprimirPalabraCortaLarga(linea, PalabraCorta, PalabraLarga);
        Fichero_salida << PalabraLarga << endl;
        Fichero_salida << PalabraCorta << endl;
      }
    } else {
      cerr << "No se ha podido abrir fichero_entrada.txt" << endl;
    }
  } else {
    cerr << "No se ha podido abrir Fichero_salida.txt" << endl;
  }
  return 0;
}