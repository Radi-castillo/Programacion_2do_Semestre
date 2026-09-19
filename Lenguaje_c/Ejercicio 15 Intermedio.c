#include <stdio.h>

int main() {
  int arr[] = {23, 45, 12, 67, 34, 89, 56};
  int n = sizeof(arr) / sizeof(arr[0]);
  int buscar, encontrado = -1;
  
  printf("Elemento a buscar: ");
  scanf("%d", &buscar);
 
 for (int i = 0; i < n; i++) {
	 if (arr[i] == buscar) {
		 encontrado = i;
		 break;
	 }
 }
 
 if (encontrado != -1)
	 printf("Elemento %d encontrado en posición %d\n", buscar, encontrado);
 else
	 printf("Elemento %d no encontrado\n", buscar);
 
 return 0;
}