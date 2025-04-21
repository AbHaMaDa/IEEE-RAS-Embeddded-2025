#include <stdio.h>
#include <string.h>

int main(){

    char str[] = "679843123";

    int length = strlen(str);

    for (int  i = 0; i < length; i++)
    {
        if(str[i]%2 == 0){
            printf("%c",str[i]);    
        }
    }
    
    return 0 ;
}