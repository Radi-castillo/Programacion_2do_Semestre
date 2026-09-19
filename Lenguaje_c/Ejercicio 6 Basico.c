#include <stdio.h>

int main() {
  float radio, area;
  const float PI = 3.14159;
  
  printf("Ingrese el radio: ");
  scanf("%f", &radio);
  
 area = PI * radio * radio;
 
 printf("El área es: %.2f\n", area);
 return 0;
}
/*
Explicación línea por línea:
Línea 4: float radio, area; - Variables de punto flotante (decimales)
Línea 5: const float PI = 3.14159; - Constante que no puede modificar su valor
Línea 8: scanf("%f", &radio); - %f es formato para float
Línea 10: area = PI * radio * radio; - Fórmula del área del círculo
Línea 12: printf("El área es: %.2f\n", area); - %.2f muestra solo 2 decimales
*/