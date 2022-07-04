#include <gtest/gtest.h>

#include "Complejo.h"

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

TEST(ComplejoTest, constructor) {
  const double kEpsilon = 1e-10;   // Un valor muy pequeño; prácticamente cero.
  Complejo my_Complejo{1.0, 4.0};

  EXPECT_EQ(false, my_Complejo.real() < kEpsilon);
  EXPECT_EQ(false, my_Complejo.imag() < kEpsilon);

  Complejo another_Complejo{1.0, 2.0};
  EXPECT_EQ(true, (my_Complejo.real() - 1.0 < kEpsilon));
  EXPECT_EQ(true, (my_Complejo.imag() - 2.0 < kEpsilon));
}


TEST(ComplejoTest, iguales) {
  Complejo complejo1{1.0, 2.0}, complejo2{1.0, -2.0};

  EXPECT_EQ(true, complejo1.real() == complejo2.real());
  EXPECT_EQ(false, complejo2.imag() == complejo2.imag());
}
