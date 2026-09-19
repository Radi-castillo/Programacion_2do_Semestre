#include <stdio.h>

int main() {
  int numero, i;
  
  printf("Ingrese un número: ");
  scanf("%d", &numero);
  
  for (i = 1; i <= 10; i++) {
	 printf("%d x %d = %d\n", numero, i, numero * i);
 }
 
 return 0;
}

/*
Explicación línea por línea:
Línea 4: int numero, i; - Declara dos variables enteras
Línea 9: for (i = 1; i <= 10; i++) { - Bucle: inicia i=1, repite mientras i≤10, incrementa i en 1 cada vez
Línea 10: printf("%d x %d = %d\n", numero, i, numero * i); - Imprime cada línea de la tabla
Línea 11: } - Cierra el bucle for
*/