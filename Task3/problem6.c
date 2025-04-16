#include <stdio.h>

int main() {
    int N, M;
    
    // Read the number of rows (N) and columns (M)
    scanf("%d %d", &N, &M);
    
    // Declare a 2D array to store the matrix
    int A[N][M];
    
    // Read the matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    // For each row, print the elements in reverse order
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
