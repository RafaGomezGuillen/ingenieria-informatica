/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 10 2022
 * @brief ComputeInt class Definition
 *
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#ifndef COMPUTEINT_H
#define COMPUTEINT_H

/**
 * @brief ComputeInt type
 */
class ComputeInt {
 public:
  ComputeInt() =
      default;  // Le dice al compilador para crear un constructor por defecto

  ComputeInt(int NumeroEntero, int NumeroEntero2);

  void FijarComputeInt(int NumeroEntero, int NumeroEntero2);

  int Factorial(int NumeroEntero);
  int SumSerie(int NumeroEntero);
  bool IsArmstrong(int NumeroEntero);
  bool IsPerfect(int NumeroEntero);
  bool IsPrime(int NumeroEntero);
  bool IsPerfectPrime(int NumeroEntero);
  bool IsBalanced(int NumeroEntero);
  bool AreRelativePrimes(int NumeroEntero, int NumeroEntero2);

  int ObtenerNumeroEntero() { return NumeroEntero_; }
  int ObtenerNumeroEntero2() { return NumeroEntero2_; }

 private:
  int NumeroEntero_;   // Almacena un numero entero
  int NumeroEntero2_;  // Almacena otro numero entero
};

#endif