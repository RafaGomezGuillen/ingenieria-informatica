/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @Fecha Enero 1 2022
 * @brief Fecha class Implementation
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#include "Fecha.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    cout << argv[0] << " Modo de uso: ./fechas dd/mm/aa N fichero_salida.txt"
         << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;
    exit(EXIT_FAILURE);
  }
  string parameter{argv[1]};
  if (parameter == "--help") {
    cout << kHelpText << endl;
    exit(EXIT_FAILURE);
  }
}

Fecha::Fecha(int Dia, int Mes, int Anio) { FijarFecha(Dia, Mes, Anio); }

/// Date member function
void Fecha::FijarFecha(int Dia, int Mes, int Anio) {
  Dia_ = Dia;
  Mes_ = Mes;
  Anio_ = Anio;

}

// Overloaded insertion operator
std::ostream &operator<<(std::ostream &out, const Fecha &Fecha) {
  out << Fecha.ObtenerDia() << "/" << Fecha.ObtenerMes() << "/"
      << Fecha.ObtenerAnio();  // actual output done here
  return out;  // return std::ostream so we can chain calls to operator<<
}

// Convierte una Fecha en string
std::string ToString(const Fecha Fecha) {
  std::string resultado{""};
  std::stringstream os;

  // resultado = resultado + Fecha.Dia() + "/" + Fecha.Mes() + "/" +
  // Fecha.Anio();
  os << Fecha.ObtenerDia() << "/" << Fecha.ObtenerMes() << "/" << Fecha.ObtenerAnio();
  os >> resultado;

  return resultado;
}

bool operator==(const Fecha &d1, const Fecha &d2) {
  return (d1.ObtenerDia() == d2.ObtenerDia() &&
          d1.ObtenerMes() == d2.ObtenerMes() &&
          d1.ObtenerAnio() == d2.ObtenerAnio());
}

bool operator>(const Fecha &d1, const Fecha &d2) {
  if (d1.ObtenerAnio() > d2.ObtenerAnio()) {
    return true;
  }
  if ((d1.ObtenerAnio() == d2.ObtenerAnio()) &&
      (d1.ObtenerMes() > d2.ObtenerMes())) {
    return true;
  }
  if ((d1.ObtenerAnio() == d2.ObtenerAnio()) &&
      (d1.ObtenerMes() == d2.ObtenerMes()) &&
      (d1.ObtenerDia() > d2.ObtenerDia())) {
    return true;
  }
  return false;
}

bool Fecha::Bisiesto(int Anio) {
  if (((Anio % 4 == 0) && (Anio % 100 != 0)) || (Anio % 400 == 0)) {
    return true;  // std::cout << "El Anio es bisiesto" << std::endl;
  } else {
    return false;  // std::cout << "El Anio no es bisiesto" << std::endl;
  }
}

bool Fecha::EsFechaValida(int Dia, int Mes, int Anio) {
  bool valid = true;

  if ((Anio >= 1800 && Anio <= 9999) && (Mes >= 1 && Mes <= 12) &&
      (Dia >= 1 && Dia <= 31)) {
    if (Mes == 4 or Mes == 6 or Mes == 9 or Mes == 11) {
      valid = (Dia >= 1 && Dia <= 30);
    } else if (Mes == 2) {
      if ((Anio % 4 == 0 && Anio % 100 != 0) or (Anio % 400 == 0))
        valid = (Dia >= 1 && Dia <= 29);
      else
        valid = (Dia >= 1 && Dia <= 28);
    }
  } else
    valid = false;

  return valid;
}

void Fecha::FechasSucesivas(int Dia, int Mes, int Anio) {
  ofstream Fichero("FicheroSalida.txt");

  if (Fichero.is_open()) {
    if (Dia > 0 && Dia < 28)  // comprobando el día de 0 a 27
      Dia += 1;
    if (Dia == 28) {
      if (Mes == 2)  // comprobando febrerro
      {
        if ((Anio % 400 == 0) ||
            (Anio % 100 != 0 ||
             Anio % 4 == 0))  // comprobar año bisiesto en caso de febrero
        {
          Dia = 29;
        } else {
          Dia = 1;
          Mes = 3;
        }
      } else  // cuando no es febrero
        Dia += 1;
    }
    if (Dia == 29)  // ultimo dia de febrero
    {
      if (Mes == 2) {
        Dia = 1;
        Mes = 3;
      } else
        Dia += 1;
    }
    if (Dia == 30)  // ultimo dia de abril, junio, septiembre y noviembre
    {
      if (Mes == 1 || Mes == 3 || Mes == 5 || Mes == 7 || Mes == 8 ||
          Mes == 10 || Mes == 12)
        Dia += 1;
      else {
        Dia = 1;
        Mes += 1;
      }
    }
    if (Dia == 31)  // ultimo dia del mes
    {
      Dia = 1;
      if (Mes == 12)  // ultimo dia del año
      {
        Anio += 1;
        Mes = 1;
      } else
        Mes += 1;
    }
    Fichero << "Fechas sucesivas:\n";
    if (Dia < 10)  // comprobar si el día debe ir precedido de 0
    {
      Fichero << "0" << Dia << " ";
    } else
      Fichero << Dia << " ";
    if (Mes < 10)  // comprobar si el mes debe ir precedido de 0
    {
      Fichero << "0" << Mes << " ";
    } else
      Fichero << Mes << " ";
    Fichero << Anio;

  } else {
    cerr << "El fichero FicheroSalida.txt no se pudo abrir." << endl;
  }
}
