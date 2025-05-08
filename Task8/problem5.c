#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory
    arr = (int *)malloc(n * sizeof(int));

    // Check if allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add to sum directly
    }

    // Output result
    printf("Sum of all elements = %d\n", sum);

    // Free memory
    free(arr);

    return 0;
}
