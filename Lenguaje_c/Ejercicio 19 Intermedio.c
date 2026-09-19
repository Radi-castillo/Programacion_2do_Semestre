1  #include <stdio.h>
2  
3  long potencia(int base, int exponente) {
4      long resultado = 1;
5      
6      for (int i = 0; i < exponente; i++) {
7          resultado = resultado * base;
8      }
9      
10     return resultado;
11 }
12 
13 int main() {
14     int base, exp;
15     
16     printf("Base: ");
17     scanf("%d", &base);
18     printf("Exponente: ");
19     scanf("%d", &exp);
20     
21     long resultado = potencia(base, exp);
22     
23     printf("%d^%d = %ld\n", base, exp, resultado);
24     
25     return 0;
26 }