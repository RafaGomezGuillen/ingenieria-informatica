/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 10 2022
 * @brief Fecha Definition
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#ifndef FECHA_H
#define FECHA_H
#include <iostream>

const std::string kHelpText =
    "Este  programa imprime en el fichero de salida "
    "(tercer parámetro) las N (segundo parámetro) fechas cronológicamente "
    "posteriores a la introducida (primer parámetro) con una separación de un "
    "día entre fechas sucesivas.";

void Usage(int argc, char *argv[]);

/**
 * @brief Fecha type
 */
class Fecha {
 public:
  Fecha() =
      default;  // Le dice al compilador para crear un constructor por defecto

  Fecha(int Dia, int Mes, int Anio);
  void FijarFecha(int Dia, int Mes, int Anio);

  friend std::ostream &operator<<(std::ostream &out, const Fecha &Fecha);
  friend bool operator==(const Fecha &d1, const Fecha &d2);
  friend bool operator>(const Fecha &d1, const Fecha &d2);
  bool Bisiesto(int Anio);
  bool EsFechaValida(int Dia, int Mes, int Anio);
  void FechasSucesivas(int Dia, int Mes, int Anio);

  int ObtenerDia() const { return Dia_; }
  int ObtenerMes() const { return Mes_; }
  int ObtenerAnio() const { return Anio_; }

 private:
  int Dia_{};   // Almacena dia
  int Mes_{};   // Almacena mes
  int Anio_{};  // Almacena anio
};

std::string ToString(const Fecha $Fecha);

#endif