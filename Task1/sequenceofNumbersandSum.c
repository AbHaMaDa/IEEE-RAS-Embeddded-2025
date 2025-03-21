#include <stdio.h>


void Sequence();
int main(){


    Sequence();


    
    return 0;
}



void Sequence(){
    int n,m;
    printf("enter your numbers \n");
    scanf("%d %d",&n,&m);
    if(m>n){
        int sum = 0;
        for(int i = n; i<=m; i++){
            printf("%d\t",i);
            sum += i;
        }
        printf("The sum of the numbers between %d and %d is %d\n",n,m,sum);
    }
}



