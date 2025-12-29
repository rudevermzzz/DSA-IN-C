#include <stdio.h>
int main() {
    int n, i, arr[100], temp;
    printf("Enter the number of elements");3
     scanf("%d", &n);

     for(i = 0; i < n; i++)
     scanf("%d", &arr[i]);

     for(i = 0; i < n/2; i++) {
         temp = arr[i];
         arr[i] = arr[n-i-1];
         arr[n-i-1] = temp;
     }
     for(i = 0; i<n; i++)
     printf("%d", arr[i]);
    return 0;
}