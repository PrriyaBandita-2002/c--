#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for the integer array of size n
    int *arr = (int *)malloc(n * sizeof(int));

    
    // Read integers from stdin and store them in the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    // Calculate the sum of the integers in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("%d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}

