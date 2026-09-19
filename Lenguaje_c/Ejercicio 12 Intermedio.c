#include <stdio.h>
#include <stdbool.h>

int main() {
  int numero, i;
  bool esPrimo = true;
  
  printf("Ingrese un número: ");
  scanf("%d", &numero);
 
 if (numero <= 1) {
	 esPrimo = false;
 } else {
	 for (i = 2; i * i <= numero; i++) {
		 if (numero % i == 0) {
			 esPrimo = false;
			 break;
		 }
	 }
 }
 
 if (esPrimo)
	 printf("%d es primo\n", numero);
 else
	 printf("%d no es primo\n", numero);
 
 return 0;
}

/*
Línea 2: #include <stdbool.h> - Incluye soporte para tipo bool (true/false)
Línea 6: bool esPrimo = true; - Variable booleana, asume que es primo inicialmente
Línea 11: if (numero <= 1) - Los números menores o iguales a 1 no son primos
Línea 14: for (i = 2; i * i <= numero; i++) - Optimización: solo se verifica hasta raíz cuadrada
Línea 15: if (numero % i == 0) - Si encuentra un divisor exacto...
Línea 16: esPrimo = false; - Ya no es primo
Línea 17: break; - Sale del bucle, ya no es necesario seguir verificando
*/