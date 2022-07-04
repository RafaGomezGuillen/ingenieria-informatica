#include <gtest/gtest.h>

#include "ComputeInt.h"

/**
 * Test para probar los constructores de la clase
 * No se comprueba la igualdad sobre números de tipo double por los
 * problemas de precisión.
 *
 * Se prueba que el valor devuelto sea igual al esperado por una diferencia
 * no mayor de epsilon (kEpsilon), un valor cercano a cero.
 *
 * @See
 * https://stackoverflow.com/questions/12278523/comparing-double-values-in-c
 *
 */

TEST(ComputeIntTest, constructor) {
  const double kEpsilon = 1e-10;  // Un valor muy pequeño; prácticamente cero.
  ComputeInt computation;

  EXPECT_EQ(true, computation.Factorial(5) > kEpsilon);
  EXPECT_EQ(false, computation.SumSerie(100) < kEpsilon);
}

TEST(VectorTest, iguales) {
  ComputeInt computation;

  EXPECT_EQ(true, computation.Factorial(6) == computation.Factorial(6));
  EXPECT_EQ(false, computation.SumSerie(100) == computation.SumSerie(10));
}
