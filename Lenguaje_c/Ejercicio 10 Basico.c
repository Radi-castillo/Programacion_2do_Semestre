#include <stdio.h>

int main() {
  float cal1, cal2, cal3, promedio;
  
  printf("Ingrese tres calificaciones: ");
  scanf("%f %f %f", &cal1, &cal2, &cal3);
  
  promedio = (cal1 + cal2 + cal3) / 3;
 
 if (promedio >= 6) {
	 printf("Aprobado con promedio: %.2f\n", promedio);
 } else {
	 printf("Reprobado con promedio: %.2f\n", promedio);
 }
 
 return 0;
}
/*
Explicación línea por línea:
Línea 4: Tres variables para calificaciones y una para promedio
Línea 7: Lee tres valores float
Línea 9: Calcula promedio sumando y dividiendo entre 3
Línea 11: if (promedio >= 6) - Condición para aprobar (6 o más)
Línea 12: Mensaje de aprobado con promedio
Línea 14: Mensaje de reprobado
*/