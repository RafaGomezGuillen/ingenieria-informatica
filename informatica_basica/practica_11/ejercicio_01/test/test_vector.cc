#include <gtest/gtest.h>

#include "Vector3D.h"

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

TEST(Vector3DTest, constructor) {
  const double kEpsilon = 1e-10;  // Un valor muy pequeño; prácticamente cero.
  Vector3D vector1, vector2;

  EXPECT_EQ(true, vector1.Modulo(3.0, 4.0, 5.0) > kEpsilon);
  EXPECT_EQ(true, vector2.Modulo(39.0, 44.0, 53.0) > kEpsilon);
}

TEST(VectorTest, iguales) {
  Vector3D vector1, vector2;

  EXPECT_EQ(true, vector1.Modulo(3.0, 4.0, 5.0) == vector1.Modulo(3.0, 4.0, 5.0));
  EXPECT_EQ(false, vector1.Modulo(3.0, 4.0, 5.0) == vector2.Modulo(39.0, 44.0, 53.0));
}
