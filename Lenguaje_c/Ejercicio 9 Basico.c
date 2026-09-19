#include <stdio.h>

int main() {
  int numero, i;
  long factorial = 1;
  
  printf("Ingrese un número: ");
  scanf("%d", &numero);
  
 for (i = 1; i <= numero; i++) {
	 factorial = factorial * i;
 }
 
 printf("%d! = %ld\n", numero, factorial);
 return 0;
}

/*
Explicación línea por línea:
Línea 5: long factorial = 1; - long permite números más grandes, factorial crece rápido
Línea 10: for (i = 1; i <= numero; i++) - Bucle desde 1 hasta el número ingresado
Línea 11: factorial = factorial * i; - Multiplica acumulativamente
Línea 14: printf("%d! = %ld\n", numero, factorial); - %ld formato para long
*/