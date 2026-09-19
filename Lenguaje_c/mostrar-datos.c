#include <stdio.h>

int main(){
    char nombre[30];
    int edad;
    char tel[40];
    char ubicacion[40];
    char cedula[40];

    // Explicación del espacio antes de %s: 
    // Al escribir " %s" (con un espacio antes del porcentaje), 
    // le ordenas a C que ignore cualquier Enter o espacio viejo en la memoria.

    printf("Ingresa tu nombre y apellido (usa guion bajo_para espacios): \n");
    scanf(" %s", nombre); // Sin el símbolo '&' para cadenas de texto

    printf("Ingresa tu cedula por favor: \n");
    scanf(" %s", cedula);

    printf("Ingresa tu telefono por favor: \n");
    scanf(" %s", tel);

    printf("Ingresa donde vives por favor: \n");
    scanf(" %s", ubicacion);

    printf("Ingresa tu edad por favor: \n");
    scanf(" %d", &edad); // Los números enteros SÍ llevan '&'

    // Mostramos los resultados usando %s para texto y \n para saltos de línea
    printf("\n--------- Perfil de usuario ----------\n");
    printf("Nombre del usuario: %s\n", nombre);
    printf("Edad del usuario: %d\n", edad);
    printf("Telefono del usuario: %s\n", tel);
    printf("Cedula del usuario: V-%s\n", cedula);
    printf("Vive en: %s\n", ubicacion);

    return 0;
}