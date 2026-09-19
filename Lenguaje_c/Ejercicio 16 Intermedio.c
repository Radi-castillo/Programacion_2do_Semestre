1  #include <stdio.h>
2  
3  int main() {
4      float a, b, resultado;
5      char operador;
6      
7      printf("Ejemplo: 5 + 3\n");
8      printf("Ingrese operación: ");
9      scanf("%f %c %f", &a, &operador, &b);
10     
11     switch (operador) {
12         case '+':
13             resultado = a + b;
14             printf("%.2f + %.2f = %.2f\n", a, b, resultado);
15             break;
16         case '-':
17             resultado = a - b;
18             printf("%.2f - %.2f = %.2f\n", a, b, resultado);
19             break;
20         case '*':
21             resultado = a * b;
22             printf("%.2f * %.2f = %.2f\n", a, b, resultado);
23             break;
24         case '/':
25             if (b != 0) {
26                 resultado = a / b;
27                 printf("%.2f / %.2f = %.2f\n", a, b, resultado);
28             } else {
29                 printf("Error: División por cero\n");
30             }
31             break;
32         default:
33             printf("Operador no válido\n");
34     }
35     
36     return 0;
37 }

/*
Explicación línea por línea:
Línea 9: Lee en formato "número, operador, número"
Línea 11: switch (operador) - Evalúa el carácter del operador
Línea 12-34: Cada case corresponde a un operador posible
Línea 14, 18, 22, 27: Realiza la operación y muestra resultado
Línea 25: if (b != 0) - Previene división por cero
Línea 32: default: - Se ejecuta si operador no coincide con ningún case
Línea 15, 19, 23, 31: break; - Sale del switch después de ejecutar el case
*/