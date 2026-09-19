#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);
  int temp;
  
  printf("Arreglo original: ");
  for (int i = 0; i < n; i++) {
	 printf("%d ", arr[i]);
 }
 printf("\n");
 
 for (int i = 0; i < n / 2; i++) {
	 temp = arr[i];
	 arr[i] = arr[n - 1 - i];
	 arr[n - 1 - i] = temp;
 }
 
 printf("Arreglo invertido: ");
 for (int i = 0; i < n; i++) {
	 printf("%d ", arr[i]);
 }
 printf("\n");
 
 return 0;
}

/*
Explicación línea por línea:
Línea 4: int arr[] = {1, 2, 3, 4, 5, 6}; - Inicializa arreglo con valores
Línea 5: int n = sizeof(arr) / sizeof(arr[0]); - Calcula longitud total: tamaño del arreglo entre tamaño de un elemento
Línea 6: int temp; - Variable temporal para intercambio
Línea 14: for (int i = 0; i < n / 2; i++) - Solo recorre hasta la mitad del arreglo
Línea 15-17: Intercambia el elemento i con el simétrico desde el final
Línea 16: arr[n - 1 - i] - Accede al elemento simétrico
*/