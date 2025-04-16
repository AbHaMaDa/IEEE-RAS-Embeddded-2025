#include <stdio.h>

int main() {
    int N;
    
    // Prompt user for the size of the square matrix
    printf("Enter the size of the square: ");
    scanf("%d", &N);
    
    int matrix[N][N];
    
    // Input the elements of the matrix
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the sum of the first row to compare with other sums
    int magicSum = 0;
    for (int i = 0; i < N; i++) {
        magicSum += matrix[0][i];
    }

    // Check if the sum of each row is the same
    for (int i = 1; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < N; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != magicSum) {
            printf("The square is not a magic square.\n");
            return 0;
        }
    }

    // Check if the sum of each column is the same
    for (int j = 0; j < N; j++) {
        int colSum = 0;
        for (int i = 0; i < N; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != magicSum) {
            printf("The square is not a magic square.\n");
            return 0;
        }
    }

    // Check the sum of the primary diagonal
    int primaryDiagonalSum = 0;
    for (int i = 0; i < N; i++) {
        primaryDiagonalSum += matrix[i][i];
    }
    if (primaryDiagonalSum != magicSum) {
        printf("The square is not a magic square.\n");
        return 0;
    }

    // Check the sum of the secondary diagonal
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < N; i++) {
        secondaryDiagonalSum += matrix[i][N-i-1];
    }
    if (secondaryDiagonalSum != magicSum) {
        printf("The square is not a magic square.\n");
        return 0;
    }

    // If all sums are equal, it's a magic square
    printf("The square is a magic square.\n");

    return 0;
}
