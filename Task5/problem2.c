#include <stdio.h>

void copyString(char source[], char destination[]) {
    int i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null-terminate the destination string
}

int main() {
    char source[100], destination[100];

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    // Remove newline character if fgets adds it
    int i = 0;
    while (source[i] != '\0') {
        if (source[i] == '\n') {
            source[i] = '\0';
            break;
        }
        i++;
    }

    copyString(source, destination);

    printf("Original String: %s\n", source);
    printf("Copied String: %s\n", destination);

    return 0;
}
