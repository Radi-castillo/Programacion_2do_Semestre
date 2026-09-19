

#include <stdio.h> // incluye biblioteca estandar
#include <stdbool.h> //incluye biblioteca para usar bool

//Prototipo de funciones
int ObtenerNumero();
bool EsPositivo(int num);
int CalcularDoble(int num);
int CalcularTriple(int num);
void MostrarMenu();
void ProcesarOpcion(int opcion, int num);

int main()
{
    int numero;
    int opcion;
    
    printf("======= Programa de funciones =======\n"); 
    
    numero = ObtenerNumero();//Llama a la funcion para obtener el número
    
    //Verifica si el número es válido
    if (EsPositivo(numero) == false) {
        printf("Error: Debe ingrsar un numero positivo");
        return 1;
    }
    
    MostrarMenu(); //Muestra el menu de opciones
    printf("Elija una opcion: ");
    scanf("%d", &opcion);
    
    ProcesarOpcion(opcion, numero);

    return 0;
}



int ObtenerNumero() {
    int num;
    
    
    printf("Ingrese un numero positivo: ");
    scanf("%d", &num);
    
    return num;
}
    
    
bool EsPositivo(int num) {
    return (num > 0);
}
    
    
int CalcularDoble(int num) {
    return (num * 2);
}    


int CalcularTriple(int num) {
    return (num * 3);
}    


void MostrarMenu() {
    printf("\n\n------- Menu de opciones -------\n\n");
    printf("1.Calcular doble\n");
    printf("2.Calcular triple\n");
    printf("3.Mostrar el numeroo original\n");
    printf("----------------------------------\n");
}    


//Funcion que procesa la opcion elegida por el usuario
void ProcesarOpcion(int opcion, int num) {
    int resultado;
    
    switch(opcion){
        case 1: 
            resultado = CalcularDoble(num);
            printf("El doble de %d es %d\n", num, resultado);
            break;   // Sale del switch
            
            
        case 2:
            resultado = CalcularTriple(num);
            printf("El triple de %d es %d \n", num, resultado);
            break;
            
            
        case 3:
            printf("El numero ingresado es %d \n ", num);
            break;
            
            
        default:
            printf("Opcion no valida\n");
            
    }
}



