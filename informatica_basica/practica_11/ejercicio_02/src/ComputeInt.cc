/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Rafael Gomez Guillen alu0101462578
 * @date Enero 1 2022
 * @brief Computer Int class Implementation
 *
 * @warning warning: ‘ComputeInt::NumeroEntero_’ should be initialized in the
 *          member initialization list [-Weffc++]
 * @see
 * git@github.com:ULL-ESIT-IB-2021-2022/ib-2021-2022-p11_oop-gtests-RafaelGomezGuillen.git
 */

#include "ComputeInt.h"

#include <bits/stdc++.h>

#include <iostream>

///  ComputeInt constructor
ComputeInt::ComputeInt(int NumeroEntero, int NumeroEntero2) {
  FijarComputeInt(NumeroEntero, NumeroEntero2);
}

/// Date member function
void ComputeInt::FijarComputeInt(int NumeroEntero, int NumeroEntero2) {
  NumeroEntero_ = NumeroEntero;
  NumeroEntero2_ = NumeroEntero2;
}

/*
 * @brief Factorial que permita calcular el factorial de un número
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
int ComputeInt::Factorial(int NumeroEntero) {
  long double Factorial = 1.0;
  for (int i = 1; i <= NumeroEntero; ++i) {
    Factorial *= i;
  }
  return Factorial;
}

/*
 * @brief SumSerie que calcule la suma de los primeros n términos de la serie: 1
 *        + 2 + 3 + ... + n.
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
int ComputeInt::SumSerie(int NumeroEntero) {
  int i, Suma;
  Suma = 0;

  for (i = 1; i <= NumeroEntero; i = i + 1) {
    Suma = Suma + i;
  }

  return Suma;
}

/// Funcion extraida de la practica 9
int power(int NumeroEntero, unsigned int y) {
  if (y == 0) return 1;
  if (y % 2 == 0)
    return power(NumeroEntero, y / 2) * power(NumeroEntero, y / 2);
  return NumeroEntero * power(NumeroEntero, y / 2) * power(NumeroEntero, y / 2);
}

/// Funcion extraida de la practica 9
int order(int NumeroEntero) {
  int n = 0;
  while (NumeroEntero) {
    n++;
    NumeroEntero = NumeroEntero / 10;
  }
  return n;
}

/*
 * @brief IsArmstrong que permita determinar si un número dado es un número de
 * Armstrong
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
bool ComputeInt::IsArmstrong(int NumeroEntero) {
  int n = order(NumeroEntero);
  int temp = NumeroEntero, sum = 0;
  while (temp) {
    int r = temp % 10;
    sum += power(r, n);
    temp = temp / 10;
  }
  return (sum == NumeroEntero);
}

/*
 * @brief IsPerfect que permita determinar si un número es perfecto
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
bool ComputeInt::IsPerfect(int NumeroEntero) {
  int divisor = 1;
  for (int i = 2; i * i <= NumeroEntero; ++i) {
    if (NumeroEntero % i == 0) divisor += i + NumeroEntero / i;
  }
  return (divisor == NumeroEntero && NumeroEntero != 0 && NumeroEntero != 1);
}

/*
 * @brief IsPrime que permita determinar si un determinado número es primo
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
bool ComputeInt::IsPrime(const int NumeroEntero) {
  bool IsPrime = true;
  for (int i = 2; i <= NumeroEntero / 2; i++) {
    if (NumeroEntero % i == 0) {
      IsPrime = false;
      break;
    }
  }
  return IsPrime;
}

/// Extraido de
/// https://stackoverflow.com/questions/52746800/check-if-number-is-perfect-prime-recursively-c/52747184
bool is_prime(int NumeroEntero) {
  for (int i = 3; i * i <= NumeroEntero; i += 2) {
    if (NumeroEntero % i == 0) return false;
  }
  return true;
}

/// Extraido de
/// https://stackoverflow.com/questions/52746800/check-if-number-is-perfect-prime-recursively-c/52747184
int sum_of_digits(int NumeroEntero) {
  int sum = 0;
  while (NumeroEntero > 0) {
    sum += NumeroEntero % 10;
    NumeroEntero /= 10;
  }
  return sum;
}

/*
 * @brief IsPerfectPrime que permita determinar si un determinado número es un
 * primo perfecto
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
bool ComputeInt::IsPerfectPrime(int NumeroEntero) {
  if (NumeroEntero < 10) return is_prime(NumeroEntero);
  if (!is_prime(NumeroEntero)) return false;
  return IsPerfectPrime(sum_of_digits(NumeroEntero));
}

/*
 * @brief IsBalanced que permita determinar si un determinado número es
 * equilibrado
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 */
bool ComputeInt::IsBalanced(int NumeroEntero) {
  int sum_par, sum_impar, digito;
  sum_par = sum_impar = 0;

  for (int i = 0; NumeroEntero != 0; ++i) {
    digito = NumeroEntero % 10;
    if (i % 2 == 0)
      sum_par += digito;
    else
      sum_impar += digito;
    NumeroEntero /= 10;
  }
  return (sum_par == sum_impar);
}

/*
 * @brief AreRelativePrimes que permita determinar si dos números son mutuamente
 * primos
 * @param[in] NumeroEntero: referencia al numero entero a evaluar
 * @param[in] NumeroEntero2: referencia a otro numero entero a evaluar
 */
bool ComputeInt::AreRelativePrimes(const int NumeroEntero,
                                   const int NumeroEntero2) {
  int Evaluador, i;

  for (i = 1; i <= NumeroEntero; i++) {
    if (NumeroEntero_ % i == 0 && NumeroEntero2 % i == 0) {
      Evaluador = i;
    }
  }
  if (Evaluador == 1) {
    return true;
  } else {
    return false;
  }
}
