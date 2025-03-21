#include <stdio.h>

void sumIsPrime();

int main(){



    sumIsPrime();
    
    return 0;
}




void sumIsPrime(){
    int num ;
    scanf("%d",&num);

    int firstDigit = num%10;
    int secondDigit = num/10;

    int sum = firstDigit + secondDigit;

    int test=0;

        for (int i = 2; i < sum ; i++)
        {
            if(sum%i==0){
                test++;
            }
        }
        printf("%s\n",test!=0?"NO":"YES");
    
}
