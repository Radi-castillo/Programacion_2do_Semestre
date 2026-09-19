1  #include <stdio.h>
2  
3  int main() {
4      int matriz[3][3] = {
5          {1, 2, 3},
6          {4, 5, 6},
7          {7, 8, 9}
8      };
9      int transpuesta[3][3];
10     
11     printf("Matriz original:\n");
12     for (int i = 0; i < 3; i++) {
13         for (int j = 0; j < 3; j++) {
14             printf("%d ", matriz[i][j]);
15         }
16         printf("\n");
17     }
18     
19     for (int i = 0; i < 3; i++) {
20         for (int j = 0; j < 3; j++) {
21             transpuesta[j][i] = matriz[i][j];
22         }
23     }
24     
25     printf("\nMatriz transpuesta:\n");
26     for (int i = 0; i < 3; i++) {
27         for (int j = 0; j < 3; j++) {
28             printf("%d ", transpuesta[i][j]);
29         }
30         printf("\n");
31     }
32     
33     return 0;
34 }