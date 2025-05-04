#include <stdio.h>

void getOddNumbers(int *arr, int size, int *oddArr, int *oddCount) {
    *oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 != 0) {
            *(oddArr + (*oddCount)) = *(arr + i);
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int oddArr[size]; // Maximum possible odd numbers
    int oddCount;

    getOddNumbers(arr, size, oddArr, &oddCount);

    printf("Odd numbers are: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    printf("\nTotal odd numbers: %d\n", oddCount);

    return 0;
}
