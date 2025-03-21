#include <stdio.h>


void palindrome();
int main(){


     palindrome();

    
    return 0;
}




void palindrome(){
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);

    char str[n];
    for (int i = 0; i < n; i++){
        printf("Enter the character at position %d: ", i);
        scanf(" %c", &str[i]);
    }


    int is_palindrome = 1;

    for (int i = 0; i < n/2; i++){
        if (str[i] != str[n-i-1]){
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }
    
}
