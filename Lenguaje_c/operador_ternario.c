#include <stdio.h>

int main(){
    int a, b;
    int mayor = 000; 
    
    printf("Introduce el valor del numero a: \n");
    scanf("%d", &a);
    
    printf("Introduce el valor del numero b: \n");
    scanf("%d", &b);
    
    mayor = (a == b)? mayor : (a > b)? a :  b; 
    
    printf("El numero mayor es %d", mayor);
    
    return 0;
}