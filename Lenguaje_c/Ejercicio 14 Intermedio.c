#include <stdio.h>

int main() {
  int n, i;
  long a = 0, b = 1, siguiente;
  
  printf("¿Cuántos términos de Fibonacci? ");
  scanf("%d", &n);
  
 printf("Serie Fibonacci: ");
 
 for (i = 0; i < n; i++) {
	 if (i <= 1)
		 siguiente = i;
	 else {
		 siguiente = a + b;
		 a = b;
		 b = siguiente;
	 }
	 printf("%ld ", siguiente);
 }
 printf("\n");
 
 return 0;
}

/*
Explicación línea por línea:
Línea 5: long a = 0, b = 1, siguiente; - Primeros dos términos de Fibonacci
Línea 12: for (i = 0; i < n; i++) - Genera exactamente n términos
Línea 13-14: Los primeros dos términos son 0 y 1
Línea 16-18: Para el resto: siguiente = a + b (suma de los dos anteriores), luego actualiza a y b
Línea 20: Imprime cada término
*/