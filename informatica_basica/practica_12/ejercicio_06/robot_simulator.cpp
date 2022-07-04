/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 17 2022
 * @brief robot_simulator namespacea and class Implementation
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen.git
 */

#include "robot_simulator.h"
/*
 * @note Mucha de las funciones no cumple con la guia de estilo de google para
 * pasar los test
 */
namespace robot_simulator {
Robot::Robot() {  // constructor
  position = {0, 0};
  bearing = NORTH;
}
Robot::Robot(const std::pair<int, int>& p, const Bearing& b) {  // constructor
  position = p;
  bearing = b;
}
const std::pair<int, int>& Robot::get_position() const {
  return position;
}  // getter de la posicion del robot
const Bearing& Robot::get_bearing() const {
  return bearing;
}  // getter de el soporte del robot

/*
 * @brief funcion que segun varios casos "invoca" otras funciones
 * @param[in] string s: pasor por referencia de s
 */
void Robot::execute_sequence(const std::string& s) {
  for (const char& c : s) {
    switch (c) {
      case 'L':
        turn_left();
        break;
      case 'R':
        turn_right();
        break;
      case 'A':
        advance();
        break;
    }
  }
}

/*
 * @brief funcion void que al girar a la izquierda adapta la posicion del robot
 * de manera correcta
 */
void Robot::turn_left() {
  switch (bearing) {
    case NORTH:
      bearing = WEST;
      break;
    case EAST:
      bearing = NORTH;
      break;
    case SOUTH:
      bearing = EAST;
      break;
    case WEST:
      bearing = SOUTH;
      break;
  }
}

/*
 * @brief funcion void que al girar a la derecha adapta la posicion del robot de
 * manera correcta
 */
void Robot::turn_right() {
  switch (bearing) {
    case NORTH:
      bearing = EAST;
      break;
    case EAST:
      bearing = SOUTH;
      break;
    case SOUTH:
      bearing = WEST;
      break;
    case WEST:
      bearing = NORTH;
      break;
  }
}

/*
 * @brief funcion void que al girar al avanzar adapta la posicion del robot de
 * manera correcta
 */
void Robot::advance() {
  switch (bearing) {
    case NORTH:
      ++position.second;
      break;
    case EAST:
      ++position.first;
      break;
    case SOUTH:
      --position.second;
      break;
    case WEST:
      --position.first;
      break;
  }
}
}  // namespace robot_simulator