#include <stdio.h>

int main() {
  int numero, suma = 0, digito;
  
  printf("Ingrese un número: ");
  scanf("%d", &numero);
  
  int original = numero;
 
 while (numero != 0) {
	 digito = numero % 10;
	 suma = suma + digito;
	 numero = numero / 10;
 }
 
 printf("La suma de dígitos de %d es: %d\n", original, suma);
 return 0;
}

/*
Explicación línea por línea:
Línea 4: suma = 0 inicializa acumulador, digito guardará cada dígito extraído
Línea 9: int original = numero; - Guarda copia del número original para mostrarlo después
Línea 11: while (numero != 0) - Continúa hasta que no queden dígitos
Línea 12: digito = numero % 10; - Extrae el último dígito (resto de dividir por 10)
Línea 13: suma = suma + digito; - Acumula el dígito extraído
Línea 14: numero = numero / 10; - Elimina el último dígito (división entera)
*/