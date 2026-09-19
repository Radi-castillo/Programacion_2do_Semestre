#include <stdio.h>

int main() {
  int contador = 1;
  
  while (contador <= 10) {
	  printf("%d ", contador);
	  contador++;
  }
 
 printf("\n");
 return 0;
}

/*
Explicación línea por línea:
Línea 4: int contador = 1; - Inicializa contador en 1
Línea 6: while (contador <= 10) { - Bucle while, repite mientras condición sea verdadera
Línea 7: printf("%d ", contador); - Imprime el contador seguido de espacio
Línea 8: contador++; - Incrementa contador en 1 (equivale a contador = contador + 1)
Línea 11: printf("\n"); - Salto de línea al final
*/