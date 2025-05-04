#include <stdio.h>

void sortAscending(int *arr, int size) {
    int i, j, temp;
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d", *(arr + i));
        if(i < size - 1) {
            printf(", ");
        }
    }
    printf(",\n");
}

int main() {
    int arr[100], size;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);

    printf("Enter %d array elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", arr + i);  // using pointer notation
    }

    // Sort in ascending order
    sortAscending(arr, size);
    printf("Array in ascending order: ");
    printArray(arr, size);

    // Reverse the sorted array to get descending order
    printf("Array in descending order: ");
    for(int i = size - 1; i >= 0; i--) {
        printf("%d", *(arr + i));
        if(i > 0) {
            printf(", ");
        }
    }
    printf(",\n");

    return 0;
}
