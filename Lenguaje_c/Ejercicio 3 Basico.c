#include <stdio.h>

int main() {
  int numero;
  
  printf("Ingrese un número: ");
  scanf("%d", &numero);
  
  printf("Usted ingresó: %d\n", numero);
 return 0;
}

/*
Línea 4: int numero; - Declara variable para almacenar el número
Línea 6: printf("Ingrese un número: "); - Muestra mensaje al usuario
Línea 7: scanf("%d", &numero); - Lee un entero y lo guarda en numero (el & indica dirección de memoria)
Línea 9: printf("Usted ingresó: %d\n", numero); - Muestra el valor ingresado
*/