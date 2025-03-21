#include <stdio.h>

void Divisors();
int main(){

    Divisors();


    
    return 0;
}



void Divisors(){
    int n;
    scanf("%d",&n);

    if(n>=1&&n<=10000){
        for (int i = 1; i <= n; i++)
        {
            if(n%i==0){
                printf("%d\n",i);
            }
        }

    }
}


// in codeforces : https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/288071034



