#include <gtest/gtest.h>

#include "Fecha.h"

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

TEST(FechaTest, iguales) {
  Fecha Fecha1(4, 10, 2020), Fecha2(4, 9, 2010), Fecha3(6, 6, 2009), Fecha4(6, 6, 2009);
  
  EXPECT_EQ(false, Fecha1 == Fecha2);
  EXPECT_EQ(true, Fecha4 == Fecha3);
}
