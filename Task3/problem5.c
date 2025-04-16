#include <stdio.h>
#include <stdlib.h>  // For the abs() function

int main() {
    int N;
    
    // Read the size of the matrix
    scanf("%d", &N);
    
    int A[N][N];
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    
    // Read the matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // Calculate the sum of the primary diagonal and secondary diagonal
    for (int i = 0; i < N; i++) {
        primaryDiagonalSum += A[i][i];              // Primary diagonal: A[i][i]
        secondaryDiagonalSum += A[i][N-i-1];        // Secondary diagonal: A[i][N-i-1]
    }
    
    // Calculate the absolute difference between the sums
    int result = abs(primaryDiagonalSum - secondaryDiagonalSum);
    
    // Output the result
    printf("%d\n", result);
    
    return 0;
}
