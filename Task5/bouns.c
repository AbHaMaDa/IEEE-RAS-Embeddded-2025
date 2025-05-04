#include <stdio.h>

int stringToInt(const char *str) {
    int result = 0;
    int sign = 1;

    // Handle negative numbers
    if (*str == '-') {
        sign = -1;
        str++;
    }

    // Convert each digit character to integer
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
        } else {
            break; // stop at any non-digit character
        }
        str++;
    }

    return sign * result;
}

int main() {
    char str1[] = "-70";
    char str2[] = "60";

    printf("Converted value 1: %d\n", stringToInt(str1));
    printf("Converted value 2: %d\n", stringToInt(str2));

    return 0;
}
