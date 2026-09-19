#include <stdio.h>

int main() {
  int num1 = 10;
  int num2 = 20;
  int suma;
  
  suma = num1 + num2;
  
 printf("La suma de %d y %d es: %d\n", num1, num2, suma);
 return 0;
}

/*
Línea 4: int num1 = 10; - Declara variable entera num1 e inicializa con 10
Línea 5: int num2 = 20; - Declara variable entera num2 e inicializa con 20
Línea 6: int suma; - Declara variable entera suma sin inicializar
Línea 8: suma = num1 + num2; - Suma las variables y guarda el resultado
Línea 10: printf("La suma de %d y %d es: %d\n", num1, num2, suma); - %d es formato para enteros, se reemplazan en orden
*/