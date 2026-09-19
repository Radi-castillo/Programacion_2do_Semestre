#include <stdio.h>

int main(){
    int nota;

    printf("Introduce tu nota: ");
    scanf("%d", &nota);

    if (nota > 90){
        printf("Tu nota de %d es sobresaliente", nota);
    }else if (nota > 70){
        printf("Tu nota de %d es notable", nota);
    }else if(nota > 60){
        printf("Aprobaste con una nota de %d", nota);
    } else{printf("Reprobado");}

    return 0;
}