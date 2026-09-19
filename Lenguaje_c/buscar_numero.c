#include <stdio.h>

// Newton School Online C compiler to run C online.
// Write C code in this online editor and run it.

int main() {
    int arr[] = {23, 45, 12, 67, 34, 89, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int buscar, encontrado = -1;

    printf("La cantidad de elementos del array es %d\n", n);
    printf("Elemento a buscar: ");
    scanf("%d", &buscar);

    for (int i = 0; i < n; i++){
        if (arr[i] == buscar){
            encontrado = i;
            break;
        }
    }

    if (encontrado != -1){
        printf("El elemento %d fue encontrado en la posicion %d\n", buscar, encontrado);
    } else  {
        printf("Elemento %d no encontrado", buscar);
    }
    return 0;
}