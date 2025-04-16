#include <stdio.h>

// Recursive function to calculate length of 3n + 1 sequence
int collatzLength(int n) {
    if (n == 1)
        return 1;
    else if (n % 2 == 0)
        return 1 + collatzLength(n / 2);
    else
        return 1 + collatzLength(3 * n + 1);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", collatzLength(n));

    return 0;
}
