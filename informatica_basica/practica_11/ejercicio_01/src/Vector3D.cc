/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief Vector3D class Implementation
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#include "Vector3D.h"

#include <assert.h>
#include <math.h>

#include <iostream>

///  ComputeInt constructor
Vector3D::Vector3D(double x, double y, double z) {
  FijarVector3D(x, y, z);
}

/// Date member function
void Vector3D::FijarVector3D(double x, double y, double z) {
  x_ = x;
  y_ = y;
  z_ = z;
}

/*
 * @brief Muestra de una manera detallada el vector
 * @param[in] Vector3D: referencia al vector
 */
std::ostream& operator<<(std::ostream& out, const Vector3D& Vector3D) {
  out << "(" << Vector3D.x_ << ", " << Vector3D.y_ << ", " << Vector3D.z_
      << ")";  // actual output done here
  return out;
}

/*
 * @brief operador de inserccion
 * @param[in] Vector3D: referencia al vector
 */

std::istream& operator>>(std::istream& in, Vector3D& Vector3D) {
  in >> Vector3D.x_;
  in >> Vector3D.y_;
  in >> Vector3D.z_;
  return in;
}

/*
 * @brief vector suma
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */
Vector3D operator+(const Vector3D& vector1, const Vector3D& vector2) {
  Vector3D result{vector1.x() + vector2.x(), vector1.y() + vector2.y(),
                  vector1.z() + vector2.z()};

  return result;
}

/*
 * @brief vector multiplicacion (escalar)
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */

Vector3D operator*(const Vector3D& vector1, const Vector3D& vector2) {
  Vector3D result{vector1.x() * vector2.x(), vector1.y() * vector2.y(),
                  vector1.z() * vector2.z()};

  return result;
}

/*
 * @brief modulo
 * @param[in] x, y ,z: referencia a las coordenadas
 */

double Vector3D::Modulo(double x, double y, double z) {
  double Modulo = x * x + y * y + z * z;

  return sqrt(Modulo);
}

/*
 * @brief normalizar vector
 * @param[in] x, y ,z: referencia a las coordenadas
*/
void Vector3D::Normalizar(double x, double y, double z) {
  double modulo = sqrt(x * x + y * y + z * z);
  double normalizar_x = x / modulo;
  double normalizar_y = y / modulo;
  double normalizar_z = z / modulo;

  std::cout << normalizar_x << ", " << normalizar_y << ", " << normalizar_z << std::endl;
}
