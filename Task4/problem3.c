#include <stdio.h>

// Function to swap values using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Input values
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swap using function
    swap(&a, &b);

    // Output swapped values
    printf("\nAfter swapping:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
