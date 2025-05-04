#include <stdio.h>

#define SIZE 3

void multiplyMatrices(int *a, int *b, int *result, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            *(result + i * size + j) = 0;
            for(int k = 0; k < size; k++) {
                *(result + i * size + j) += (*(a + i * size + k)) * (*(b + k * size + j));
            }
        }
    }
}

void printMatrix(int *matrix, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", *(matrix + i * size + j));
        }
        printf("\n");
    }
}

int main() {
    int a[SIZE][SIZE], b[SIZE][SIZE], result[SIZE][SIZE];

    printf("Enter elements of first 3x3 matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    multiplyMatrices((int *)a, (int *)b, (int *)result, SIZE);

    printf("Product of matrices is:\n");
    printMatrix((int *)result, SIZE);

    return 0;
}
