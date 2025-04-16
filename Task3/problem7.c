#include <stdio.h>
#include <string.h>

int main() {
    int N;
    char S[100001];
    
    // Read the size of the string N and the string S
    scanf("%d", &N);
    scanf("%s", S);
    
    // Variable to store the length of the resulting subsequence
    int result_length = 1;  // First character is always included in the subsequence
    
    // Traverse through the string and count the length of subsequence
    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
            result_length++;
        }
    }
    
    // Output the result
    printf("%d\n", result_length);
    
    return 0;
}
