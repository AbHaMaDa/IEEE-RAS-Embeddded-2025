#include <stdio.h>
int getStringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[] = "Embedded Systems";
    int len = getStringLength(str);
    printf("Length = %d\n", len);
    return 0;
}
