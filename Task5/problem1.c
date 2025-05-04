#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // Not identical
        }
        i++;
    }
    return 1; // Identical
}

int main() {
    char str1[100], str2[100];

    printf("Enter String1: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter String2: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters inserted by fgets
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    if (compareStrings(str1, str2)) {
        printf("Both strings are Identical\n");
    } else {
        printf("Strings are NOT Identical\n");
    }

    return 0;
}
