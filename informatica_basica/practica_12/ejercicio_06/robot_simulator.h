/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 17 2022
 * @brief robot_simulator namespace and class Definition
 *
 * @see
 * https://github.com/ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p12_oop-exercism-RafaelGomezGuillen.git
 */

#if !defined(ROBOT_SIMULATOR_H)
#define ROBOT_SIMULATOR_H
#include <string>
#include <utility>
namespace robot_simulator {
enum Bearing { NORTH, SOUTH, EAST, WEST };
class Robot {
 public:
  Robot(void);
  Robot(const std::pair<int, int>&, const Bearing&);
  const std::pair<int, int>& get_position(void) const;
  const Bearing& get_bearing(void) const;
  void turn_left(void);
  void turn_right(void);
  void advance(void);
  void execute_sequence(const std::string&);

  private:
  std::pair<int, int> position;
  Bearing bearing;
};
}  // namespace robot_simulator
#endif  // ROBOT_SIMULATOR_H