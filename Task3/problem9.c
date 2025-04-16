#include <stdio.h>

int main() {
    int N;
    
    // Read the number of elements in the array
    scanf("%d", &N);
    
    int A[N];
    
    // Read the elements of the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Find the minimum element in the array
    int min_value = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < min_value) {
            min_value = A[i];
        }
    }
    
    // Count the frequency of the minimum element
    int min_count = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == min_value) {
            min_count++;
        }
    }

    // Output the result based on the frequency of the minimum element
    if (min_count % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    
    return 0;
}
