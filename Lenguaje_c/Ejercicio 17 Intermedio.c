1  #include <stdio.h>
2  #include <string.h>
3  #include <stdbool.h>
4  
5  int main() {
6      char texto[100];
7      bool esPalindromo = true;
8      
9      printf("Ingrese una palabra o frase: ");
10     fgets(texto, sizeof(texto), stdin);
11     
12     texto[strcspn(texto, "\n")] = 0;
13     
14     int largo = strlen(texto);
15     
16     for (int i = 0; i < largo / 2; i++) {
17         if (texto[i] != texto[largo - 1 - i]) {
18             esPalindromo = false;
19             break;
20         }
21     }
22     
23     if (esPalindromo)
24         printf("\"%s\" es un palíndromo\n", texto);
25     else
26         printf("\"%s\" no es un palíndromo\n", texto);
27     
28     return 0;
29 }