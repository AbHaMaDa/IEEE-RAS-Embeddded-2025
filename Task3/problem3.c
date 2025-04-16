#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Outer loop for multiple passes over the array
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing and swapping adjacent elements
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Call bubble sort function
    bubbleSort(arr, N);
    
    // Print the sorted array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
