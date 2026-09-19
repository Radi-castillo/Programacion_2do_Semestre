#include <stdio.h>
#define MAX_ESTUDIANTES 10

// Estructura de estudiante
struct Estudiante {
    char nombre[50];
    float calificaciones[3];
    float promedio;
    char letra;
};

// Prototipos de funciones
void ingresarDatos(struct Estudiante estudiantes[], int *n);
void calcularPromedios(struct Estudiante estudiantes[], int n);
void mostrarReporte(struct Estudiante estudiantes[], int n);
float calcularPromedioGeneral(struct Estudiante estudiantes[], int n);
void encontrarMejorPeor(struct Estudiante estudiantes[], int n, int *mejor, int *peor);
int mostrarMenu();

int main() {
    struct Estudiante estudiantes[MAX_ESTUDIANTES];
    int numEstudiantes = 0;
    int opcion;

    do {
        opcion = mostrarMenu();
        switch(opcion) {
            case 1:
                ingresarDatos(estudiantes, &numEstudiantes);
                calcularPromedios(estudiantes, numEstudiantes);
                printf("Datos ingresados y promedios calculados correctamente.\n");
                break;
            case 2:
                if (numEstudiantes == 0) {
                    printf("No hay datos ingresados.\n");
                } else {
                    mostrarReporte(estudiantes, numEstudiantes);
                    float general = calcularPromedioGeneral(estudiantes, numEstudiantes);
                    printf("Promedio general del curso: %.2f\n", general);
                    
                    int mejor, peor;
                    encontrarMejorPeor(estudiantes, numEstudiantes, &mejor, &peor);
                    printf("Mejor estudiante: %s (%.2f)\n", estudiantes[mejor].nombre, estudiantes[mejor].promedio);
                    printf("Peor estudiante: %s (%.2f)\n", estudiantes[peor].nombre, estudiantes[peor].promedio);
                }
                break;
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 3);

    return 0;
}

// Función para mostrar menú
int mostrarMenu() {
    int opcion;
    printf("\n=== SISTEMA DE GESTION DE CALIFICACIONES ===\n");
    printf("1. Ingresar calificaciones\n");
    printf("2. Mostrar reporte\n");
    printf("3. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);
    return opcion;
}

// Función para ingresar datos
void ingresarDatos(struct Estudiante estudiantes[], int *n) {
    int cantidad;
    printf("¿Cuantos estudiantes desea ingresar? (max %d): ", MAX_ESTUDIANTES - *n);
    scanf("%d", &cantidad);

    if (*n + cantidad > MAX_ESTUDIANTES) {
        printf("Excede el limite maximo. Solo se pueden ingresar %d mas.\n", MAX_ESTUDIANTES - *n);
        cantidad = MAX_ESTUDIANTES - *n;
    }

    for (int i = 0; i < cantidad; i++) {
        printf("\n--- Estudiante %d ---\n", (*n) + 1);
        printf("Nombre: ");
        scanf("%s", estudiantes[*n].nombre); // No uses espacios al escribir el nombre aquí

        printf("Ingrese las 3 calificaciones (0-100):\n");
        for (int j = 0; j < 3; j++) {
            printf("Calificacion %d: ", j + 1);
            scanf("%f", &estudiantes[*n].calificaciones[j]);
            
            // Validación lógica corregida (usando OR ||)
            while (estudiantes[*n].calificaciones[j] < 0 || estudiantes[*n].calificaciones[j] > 100) {
                printf("Calificacion invalida. Ingrese entre 0 y 100: ");
                scanf("%f", &estudiantes[*n].calificaciones[j]);
            }
        }
        (*n)++; // Incrementa el contador global de estudiantes
    }
}

// Función para calcular promedios
void calcularPromedios(struct Estudiante estudiantes[], int n) {
    for (int i = 0; i < n; i++) {
        float suma = 0;
        for (int j = 0; j < 3; j++) {
            suma += estudiantes[i].calificaciones[j];
        }
        estudiantes[i].promedio = suma / 3.0;

        // Asignar letra usando if-else 
        if (estudiantes[i].promedio >= 90) {
            estudiantes[i].letra = 'A';
        } else if (estudiantes[i].promedio >= 80) {
            estudiantes[i].letra = 'B';
        } else if (estudiantes[i].promedio >= 70) {
            estudiantes[i].letra = 'C';
        } else if (estudiantes[i].promedio >= 60) {
            estudiantes[i].letra = 'D';
        } else {
            estudiantes[i].letra = 'F';
        }
    }
}

// Función para mostrar reporte
void mostrarReporte(struct Estudiante estudiantes[], int n) {
    printf("\n=== REPORTE DE CALIFICACIONES ===\n");
    for (int i = 0; i < n; i++) {
        printf("Estudiante: %s\n", estudiantes[i].nombre);
        printf("Calificaciones: %.2f, %.2f, %.2f\n", 
               estudiantes[i].calificaciones[0], 
               estudiantes[i].calificaciones[1], 
               estudiantes[i].calificaciones[2]);
        printf("Promedio: %.2f\n", estudiantes[i].promedio);
        printf("Calificacion final: %c\n\n", estudiantes[i].letra);
    }
}

// Función para calcular promedio general
float calcularPromedioGeneral(struct Estudiante estudiantes[], int n) {
    if (n == 0) return 0; // Prevención de división por cero

    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += estudiantes[i].promedio;
    }
    return suma / n;
}

// Función para encontrar mejor y peor estudiante
void encontrarMejorPeor(struct Estudiante estudiantes[], int n, int *mejor, int *peor) {
    *mejor = 0;
    *peor = 0;
    for (int i = 1; i < n; i++) {
        if (estudiantes[i].promedio > estudiantes[*mejor].promedio) {
            *mejor = i;
        }
        if (estudiantes[i].promedio < estudiantes[*peor].promedio) {
            *peor = i;
        }
    }
}