#include <stdio.h>

// Recursive function to check if we can reach N
int canReachN(long long current, long long N) {
    if (current == N)
        return 1; // Reached N
    if (current > N)
        return 0; // Exceeded N

    // Try both operations (multiply by 10 or by 20)
    return canReachN(current * 10, N) || canReachN(current * 20, N);
}

int main() {
    int t;
    scanf("%d", &t); // Read number of test cases

    while (t--) {
        long long n;
        scanf("%lld", &n); // Read the target number N

        if (canReachN(1, n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
