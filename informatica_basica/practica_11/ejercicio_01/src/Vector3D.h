/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 10 2022
 * @brief Vector 3D class Definition
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */
#include <iostream>
#ifndef Vector3D_H
#define Vector3D_H

class Vector3D {
 public:
  Vector3D() = default;
  Vector3D(double x, double y, double z);
  void FijarVector3D(double x, double y, double z);
  double x() const { return x_; }
  double y() const { return y_; }
  double z() const { return z_; }

  friend std::ostream& operator<<(std::ostream& out, const Vector3D& Vector3D);
  friend std::istream& operator>>(std::istream& in, Vector3D& Vector3D);
  double Modulo(double x, double y, double z);
  void Normalizar(double x, double y, double z);

 private:
  double x_;  // Almacena el punto del eje x
  double y_;  // Almacena el punto del eje y
  double z_;  // Almacena el punto del eje z
};

Vector3D operator+(const Vector3D& vector1, const Vector3D& vector2);
Vector3D operator*(const Vector3D& vector1, const Vector3D& vector2);

#endif