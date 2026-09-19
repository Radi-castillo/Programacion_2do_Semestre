#include <stdio.h>

int main() {
  int a, b, mayor;
  
  printf("Ingrese dos números: ");
  scanf("%d %d", &a, &b);
  
  if (a > b) {
	 mayor = a;
 } else {
	 mayor = b;
 }
 
 printf("El mayor es: %d\n", mayor);
 return 0;
}
/*
Explicación línea por línea:
Línea 7: scanf("%d %d", &a, &b); - Lee dos enteros separados por espacio
Línea 9: if (a > b) { - Compara si a es mayor que b
Línea 10: mayor = a; - Asigna a como mayor
Línea 12: mayor = b; - Asigna b como mayor
Línea 15: Muestra el número mayor
*/