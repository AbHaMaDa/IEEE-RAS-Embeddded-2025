#include <stdio.h>
#include <ctype.h>

int main() {
    char S[1000001];  // Max length of input string can be 10^6

    // Read the input string
    fgets(S, sizeof(S), stdin);

    int count = 0;
    int i = 0;

    // Traverse the string
    while (S[i] != '\0') {
        // Skip non-alphabetic characters
        while (S[i] != '\0' && !isalpha(S[i])) {
            i++;
        }

        // If we reach an alphabetic character, it's the start of a word
        if (S[i] != '\0') {
            count++;
            // Skip the whole word (all consecutive alphabetic characters)
            while (S[i] != '\0' && isalpha(S[i])) {
                i++;
            }
        }
    }

    // Output the result
    printf("%d\n", count);
    
    return 0;
}
