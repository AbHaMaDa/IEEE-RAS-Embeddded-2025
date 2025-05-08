#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *arr1, *arr2, *arr4;

    // Allocate using malloc (uninitialized memory)
    arr1 = (int *)malloc(5 * sizeof(int));
    if (arr1 == NULL) {
        printf("malloc failed for arr1!\n");
        return 1;
    }
    for (i = 0; i < 5; i++) {
        arr1[i] = i + 1;
    }

    // Allocate using calloc (initialized to zero)
    arr2 = (int *)calloc(5, sizeof(int));
    if (arr2 == NULL) {
        printf("calloc failed for arr2!\n");
        free(arr1);
        return 1;
    }
    for (i = 0; i < 5; i++) {
        arr2[i] = (i + 1) * 10;
    }

    // Print values from arr1
    printf("arr1 (malloc):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Print values from arr2
    printf("arr2 (calloc):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Free arr1 (simulate freeing smaller memory block)
    free(arr1);
    arr1 = NULL;

    // Allocate a larger block (simulate new allocation request)
    arr4 = (int *)malloc(1000 * sizeof(int));  // 1000 integers
    if (arr4 == NULL) {
        printf("malloc failed for arr4!\n");
        free(arr2);
        return 1;
    }

    // Assign and print some values to arr4
    for (i = 0; i < 10; i++) {
        arr4[i] = i * 100;
    }

    printf("arr4 (new larger malloc):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr4[i]);
    }
    printf("\n");

    // Free the rest
    free(arr2);
    free(arr4);

    return 0;
}
