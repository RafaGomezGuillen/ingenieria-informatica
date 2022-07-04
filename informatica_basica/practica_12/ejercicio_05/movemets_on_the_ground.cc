/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @author Rafael Gomez Guilen alu0101462578
 * @date 17/01/2022
 *
 * @brief Escriba un programa que lea una secuencia de caracteres, cada uno
 *        codificando un movimiento (' n ' para el norte, ' s ' para el sur, ' e
 * ' para el este y ' w ' para el oeste), y que calcule la posición final de un
 * objeto ubicado inicialmente en (0, 0). Suponga que el primer componente
 * corresponde a la dirección este-oeste, que ir est significa agregar 1 a ese
 * componente y que ir al sur significa agregar 1 al segundo componente.
 * @bug No hay bugs conocidos
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen.git
 */
#include <iostream>
int main() {
  char direccion;
  int sur = 0, norte = 0, este = 0, oeste = 0;

  while (std::cin >> direccion) {
    if (direccion == 's') {
      ++sur;
    } else if (direccion == 'n') {
      ++norte;
    } else if (direccion == 'e') {
      ++este;
    } else if (direccion == 'o') {
      ++oeste;
    }
  }
  std::cout << "(" << este - oeste << ", " << sur - norte << ")" << std::endl;

  return 0;
}