#include <stdio.h>

// Recursive function to print from 1 to n
void printNumbers(int current, int n) {
    if (current > n)
        return;

    printf("%d\n", current);
    printNumbers(current + 1, n);
}

int main() {
    int n;
    scanf("%d", &n);

    printNumbers(1, n);

    return 0;
}
