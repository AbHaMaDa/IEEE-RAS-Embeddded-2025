#include <stdio.h>

// Recursive function to print digits
void printDigits(int n) {
    if (n < 10) {
        printf("%d ", n);
        return;
    }

    printDigits(n / 10);         // First print the left part
    printf("%d ", n % 10);       // Then print the current last digit
}

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        printDigits(n);
        printf("\n");
    }

    return 0;
}
