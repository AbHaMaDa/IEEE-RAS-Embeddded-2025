#include <stdio.h>

int main() {
    int N, X;
    
    // Read the number of elements
    scanf("%d", &N);
    
    // Declare the array
    int A[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    // Read the value of X
    scanf("%d", &X);
    
    // Iterate over the array to find the first occurrence of X
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            printf("%d\n", i);  // Print the index of first occurrence
            return 0;  // Exit the function once X is found
        }
    }
    
    // If X is not found, print -1
    printf("-1\n");
    
    return 0;
}
