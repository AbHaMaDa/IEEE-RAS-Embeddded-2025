#include <stdio.h>

int main() {
    int N;
    
    // Read the number of elements
    scanf("%d", &N);
    
    // Declare the array
    int A[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Initialize the lowest number and its position
    int min_value = A[0];
    int min_index = 0;
    
    // Iterate through the array to find the lowest number
    for (int i = 1; i < N; i++) {
        if (A[i] < min_value) {
            min_value = A[i];
            min_index = i;
        }
    }
    
    // Print the lowest number and its position
    printf("%d %d\n", min_value, min_index);
    
    return 0;
}
