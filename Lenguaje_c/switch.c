#include <stdio.h>

int main(){
    int opcion;
    
    printf("---- Menu de opciones ----\n");
    printf("1.Hamburguesa sencilla\n");
    printf("2.Hamburguesa doble carne\n");
    printf("3.Hamburguesa pollo crispy\n");
    
    printf("Ingresa tu opcion aqui: \n");
    scanf("%d", &opcion);
    
    switch (opcion){
        
        case 1:
            printf("Aqui tienes tu hamburguesa sencilla");
            break;
            
        case 2:
            printf("Aqui tienes tu hamburguesa doble carne");
            break;
            
        case 3:
            printf("Aqui tienes tu hamburguesa pollo crispy");
            break; 
            
        default:
            printf("Opcion no valida");
            break;  
    }
    
    return 0;  
}