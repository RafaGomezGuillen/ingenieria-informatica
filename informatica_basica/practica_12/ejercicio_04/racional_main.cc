/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief clase racional
 *        este es un programa cliente que usa la clase racional
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_classes-RafaelGomezGuillen
 */

#include <fstream>
#include <iostream>

#include "racional.h"
using namespace std;

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  ifstream fichero_entrada;
  fichero_entrada.open(argv[1]);
  ofstream fichero_salida("fichero_salida.txt");
  string linea;

  if (fichero_entrada.is_open()) {
    if (fichero_salida.is_open()) {
      while (getline(fichero_entrada, linea)) {
        Racional racional1{5, 3};
        Racional racional2{4, 6};
        Racional suma = racional1 + racional2;
        Racional resta = racional1 - racional2;
        Racional multiplicacion = racional1 * racional2;
        Racional division = racional1 / racional2;

        fichero_salida << linea << " = " << suma << std::endl;
        fichero_salida << linea << " = " << resta << std::endl;
        fichero_salida << linea << " = " << multiplicacion << std::endl;
        fichero_salida << linea << " = " << division << std::endl;
      }
    } else {
      cerr << "No se pudo abrir el fichero_salida.txt" << endl;
    }
  } else {
    cerr << "No se pudo abrir el fichero_entrada.txt" << endl;
  }

  Racional racional1{1, 2};
  Racional racional2{1, 2};
  Racional racional3{-3, -5};
  Racional racional4{7, -9};
  Racional racional5{-4, 5};
  Racional racional6{8, -2};
  Racional suma = racional1 + racional2;
  Racional resta = racional3 - racional4;
  Racional multiplicacion = racional1 * racional4;
  Racional division = racional5 / racional6;

  std::cout << suma << std::endl;
  std::cout << resta << std::endl;
  std::cout << multiplicacion << std::endl;
  std::cout << division << std::endl;
  return 0;
}