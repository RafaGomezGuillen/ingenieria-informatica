# #include <cmath>
# #include <iostream>
# using namespace std;

# int main() {
#   cout << "PR3 aproximación por serie geométrica" << endl;
#   do {
#     float x = 1;
#     while (x >= 1 || x <= -1) {
#       cout << "Introduzca el valor de input (|x|<1): ";
#       cin >> x;
#     }
#     if (x == 0) break;
#     float valor_real;
#     valor_real = 1 / (1 + x);
#     cout << "Resultado real = " << valor_real << endl;
#     float error_objetivo = 1;
#     while (error_objetivo < 0 || error_objetivo > valor_real) {
#       cout << "Introduzca el error objetivo: ";
#       cin >> error_objetivo;
#     }
#     float error = 1;
#     float sumatorio = 1;
#     int termino = 1;
#     float termino_acumulado, error_acumulado = -1;
#     termino_acumulado = x;
#     while (error > error_objetivo) {
#       sumatorio += error_acumulado * termino_acumulado;
#       error = fabs(sumatorio - valor_real);
#       termino_acumulado *= x;
#       error_acumulado *= -1;
#       termino++;
#     }
#     cout << "\nResultado calculado para " << termino << " terminos = " << sumatorio << endl;
#     cout << "Error cometido para " << termino << " terminos = " << error << endl;
#   } while (true);
#   cout << "FIN DEL PROGRAMA. " << endl;
# }   
# Cuestiones:
# 1) Inicializas todos los valores a 1 o -1 para ahorrarme calcular la iteración 0 ya que esta siempre
# es igual a 1
# 2) Los registros que utilicé fueron:
#  float x = 1; $f4
#  float valor_real; $f6
#  float error_objetivo = 1; $f7
#  float error = 1; $f8
#  float sumatorio = 1; $f9
#  int termino = 1; $t1
#  float termino_acumulado f11
#  float error_acumulado = -1; f13
# Los declaré de esta manera a medida que los iba utilizando, dejando de la el $f0 y $f12 ya que uno 
# se declara al pedir un flotante un pantalla y el otro al mostrar en pantalla un registro.

# Los demás registros los utilicé como constante para cuando quería hacer calculos con 1, 0 o -1 por
# ejemplo.
# 3) A la hora de pasar a doble presición las operaciones deben terminar en .d en lugar de .s y solo se
# pueden usar registros pares, cuando imprimes en pantalla se puede usar el registro $f13 además del $f12
# poniendo en $v0->3; y para leer el $f1 además del $f0 puniendo en $v0->7.
    .data
titulo: .asciiz "PR3 aproximación por serie geométrica\n"
finmsg: .asciiz "\nFIN DEL PROGRAMA.\n"
calmsg: .asciiz "\nResultado real = "
pidex:  .asciiz "\nIntroduzca el valor de x (|x|<1): "
piderr: .asciiz "\nIntroduzca el error objetivo: "
resmsg: .asciiz "\nResultado calculado para " 
termsg: .asciiz " terminos = " 
errmsg: .asciiz "\nError cometido para "
    .text
main:
  #   cout << "PR3 aproinputimacion por serie geometrica" << endl;
	li	$v0, 4 # $v0 = 4 funcion print string 
  la	$a0,titulo  # $a0 = direccion a la cadena a imprimir
	syscall
  etiqueta_do:
    # float x = 1;
    li.s $f1, 1.0
    while1:
      # cout << "Introduzca el valor de input (|x|<1): ";
      li	$v0, 4 # $v0 = 4 funcion print string 
      la	$a0,pidex  # $a0 = direccion a la cadena a imprimir
	    syscall
      # cin >> x;
      li $v0, 6
      syscall
      mov.s $f1, $f0
      # if (x == 0) break;
      li.s $f3, 0.0
	    c.eq.s $f1, $f3
      bc1t fin
      # if (|x|<1):      
      abs.s $f4, $f1
      li.s $f2, 1.0
      c.lt.s $f4, $f2
      bc1t whileFin1
      # if (x >= 1 || x <= -1)
      c.lt.s $f4, $f2
      bc1f while1
      j while1
    whileFin1:
    #float valor_real; -> $f6
    add.s $f5, $f2, $f4 # $f5 = (1 + x)
    # valor_real = 1 / (1 + x);
    div.s $f6, $f2, $f5
    # cout << "Resultado real = "
    li $v0, 4 # $v0 = 4 funcion print string 
    la $a0, calmsg # $a0 = direccion a la cadena a imprimir
    syscall
    mov.s $f12, $f6 # << valor_real <<
    li $v0, 2 
    syscall
    # float error_objetivo = 1; 
    li.s $f7, 1.0
    while2:
      li	$v0, 4 # $v0 = 4 funcion print string 
      la	$a0,piderr  # $a0 = direccion a la cadena a imprimir
	    syscall
      # cin >> error_objetivo;
      li $v0, 6
      syscall
      mov.s $f7, $f0
      # error_objetivo < 0 
      c.lt.s $f7, $f3
      bc1t while2
      # valor_real < error_objetivo
      c.lt.s $f6, $f7
      bc1t while2
      c.lt.s $f7, $f3
      bc1f whileFin2
      c.lt.s $f6, $f7
      bc1f whileFin2
      j while2
    whileFin2:
    # float error = 1; 
    li.s $f8, 1.0
    # float sumatorio = 1; 
    li.s $f9, 1.0
    # int termino = 1; 
    li $t1, 1
    # float termino_acumulado
    li.s $f11, -1.0
    # float error_acumulado
    li.s $f13, -1.0
    # termino_acumulado = x;
    mov.s $f11, $f4 
      while3:
        # sumatorio += error_acumulado * termino_acumulado;
        # $f15 = error_acumulado * termino_acumulado
        mul.s $f15, $f13, $f11
        add.s $f9, $f9, $f15
        # error = fabs(sumatorio - valor_real);
        # $f16 = (sumatorio - valor_real)
        # $f17 = fabs(sumatorio - valor_real)
        sub.s	$f16, $f9, $f6 
        abs.s $f17, $f16		
        mov.s $f8, $f17
        # termino_acumulado *= x;
        mul.s $f11, $f11, $f4
        # error_acumulado *= -1;
        li.s $f18, -1.0
        mul.s $f13, $f13, $f18
        # termino++;
        addi $t1, $t1, 1
        # (error_objetivo < error) 
        c.lt.s $f7, $f8
        bc1t while3
        # (error_objetivo < error) 
        c.lt.s $f7, $f8
        bc1f whileFin3
        j while3
      whileFin3:
      # cout << "\nResultado calculado para ";
      li	$v0, 4 
      la	$a0,resmsg  
	    syscall
      move $a0, $t1 # << termino <<
      li $v0, 1 
      syscall
      # cout << "terminos = ";
      li	$v0, 4 
      la	$a0,termsg  
	    syscall 
      mov.s $f12, $f9 # << sumatorio <<
      li $v0, 2 
      syscall
      # cout << "Error cometido para ";
      li	$v0, 4 
      la	$a0,errmsg  
	    syscall
      move $a0, $t1 # << termino <<
      li $v0, 1 
      syscall
      # cout << "terminos = ";
      li	$v0, 4 
      la	$a0,termsg 
	    syscall 
      mov.s $f12, $f8 # << error <<
      li $v0, 2 
      syscall 
  j etiqueta_do
  fin:
  # cout << "FIN DEL PROGRAMA. " << endl;
  li $v0, 4 
	la $a0,finmsg  
	syscall
	li $v0, 10
	syscall 
