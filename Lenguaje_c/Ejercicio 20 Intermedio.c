1  #include <stdio.h>
2  
3  int main() {
4      int arr[] = {64, 34, 25, 12, 22, 11, 90};
5      int n = sizeof(arr) / sizeof(arr[0]);
6      int temp;
7      
8      printf("Arreglo original: ");
9      for (int i = 0; i < n; i++) {
10         printf("%d ", arr[i]);
11     }
12     printf("\n");
13     
14     for (int i = 0; i < n - 1; i++) {
15         for (int j = 0; j < n - i - 1; j++) {
16             if (arr[j] > arr[j + 1]) {
17                 temp = arr[j];
18                 arr[j] = arr[j + 1];
19                 arr[j + 1] = temp;
20             }
21         }
22     }
23     
24     printf("Arreglo ordenado: ");
25     for (int i = 0; i < n; i++) {
26         printf("%d ", arr[i]);
27     }
28     printf("\n");
29     
30     return 0;
31 }