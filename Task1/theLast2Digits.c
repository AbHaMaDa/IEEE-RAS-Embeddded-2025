#include <stdio.h>



void getLast2Digits();
int main(){


    getLast2Digits();


    
    return 0;
}




void getLast2Digits(){
    int a,b,c,d;

    printf("enter your numbers \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int total = a*b*c*d;
    
    int last2Digits = total%100 ; 

    printf("The last 2 digits are %d\n",last2Digits);
}
