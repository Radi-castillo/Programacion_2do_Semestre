#include <stdio.h>

int main() {
	int numero;
    printf("ingrese un numero\n");
	scanf("%d",&numero);
	if (numero % 2 == 0) {
    printf("%d es par\n", numero); 
    } else {
		printf("%d es impar\n",numero);
	}
	return 0;

}