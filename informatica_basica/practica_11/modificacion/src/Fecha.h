
#define FECHA_H
#include <iostream>
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

  void SumarDias(int Dia);

  int ObtenerDia() const { return Dia_; }
  int ObtenerMes() const { return Mes_; }
  int ObtenerAnio() const { return Anio_; }

 private:
  int Dia_{};   // Almacena dia
  int Mes_{};   // Almacena mes
  int Anio_{};  // Almacena anio
};