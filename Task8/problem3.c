#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *arr1, *arr2, *arr3;

    // Allocate using malloc (uninitialized memory)
    arr1 = (int *)malloc(5 * sizeof(int));
    if (arr1 == NULL) {
        printf("malloc failed!\n");
        return 1;
    }
    // Assign values
    for (i = 0; i < 5; i++) {
        arr1[i] = i + 1;
    }

    // Allocate using calloc (initialized memory to zero)
    arr2 = (int *)calloc(5, sizeof(int));
    if (arr2 == NULL) {
        printf("calloc failed!\n");
        free(arr1);
        return 1;
    }
    // Assign values
    for (i = 0; i < 5; i++) {
        arr2[i] = (i + 1) * 10;
    }

    // Reallocate arr1 to hold more integers
    arr3 = (int *)realloc(arr1, 10 * sizeof(int));
    if (arr3 == NULL) {
        printf("realloc failed! Keeping old memory.\n");
        // arr1 still valid
    } else {
        arr1 = arr3;
        // Assign more values to newly allocated memory
        for (i = 5; i < 10; i++) {
            arr1[i] = (i + 1) * 100;
        }
    }

    // Print malloc/realloc result
    printf("arr1 (malloc + realloc):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Print calloc result
    printf("arr2 (calloc):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Free all memory
    free(arr1);
    free(arr2);

    return 0;
}
