#include <stdio.h>

#define SIZE 5

// Uncomment one of the following to choose the sort order:
//#define ASCENDING
#define DESCENDING

// Function to input values from user and sort in ascending order
int* sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

// Function to input values from user and sort in descending order
int* sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

// Main function
int main() {
    int array[SIZE];

    // Input values
    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int* sortedArray;

    // Use macros to choose sorting logic
    #ifdef ASCENDING
        sortedArray = sortAscending(array, SIZE);
        printf("\nSorted in Ascending Order:\n");
    #elif defined(DESCENDING)
        sortedArray = sortDescending(array, SIZE);
        printf("\nSorted in Descending Order:\n");
    #else
        printf("No sorting macro defined.\n");
        return 1;
    #endif

    // Print sorted array
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");

    return 0;
}
