#include <stdio.h>
#include <string.h>

// Function to check if number is odd
int isOdd(int n) {
    return n % 2 != 0;
}

// Function to check if binary representation is a palindrome
int isBinaryPalindrome(int n) {
    char binary[32];
    int index = 0;

    // Convert to binary (store in reverse order)
    while (n > 0) {
        binary[index++] = (n % 2) + '0';
        n /= 2;
    }

    // Check if the binary string is a palindrome
    for (int i = 0; i < index / 2; i++) {
        if (binary[i] != binary[index - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isOdd(n) && isBinaryPalindrome(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
