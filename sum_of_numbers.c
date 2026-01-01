#include <stdio.h>

int main() {
    int n, i, arr[100], sum = 0;

    printf("Enter the number of elements to add: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter %d%s number: ", i+1,
               (i+1 == 1) ? "st" :
               (i+1 == 2) ? "nd" :
               (i+1 == 3) ? "rd" : "th");

        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
