#include <stdio.h>

void perfect();
int main(){

    perfect();

    
    return 0;
}



void perfect(){
    int n;
    int sum =0 ;
    scanf("%d",&n);

    for (int i = 1; i < n; i++){
        if(n%i==0){
            printf("%d\n",i);
            sum+=i;
        }
    }

    if(sum == n){
        printf("%d is a perfect number \n",n);
    }else{
        printf("%d is not a perfect number \n",n);
    }


}

