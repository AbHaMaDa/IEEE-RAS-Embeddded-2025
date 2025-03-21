#include <stdio.h>



void getBigSmallNum();

int main(){

    getBigSmallNum();

    return 0;
}


void getBigSmallNum(){
    int n;
    int big;
    int small;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the numbers\n");

    for (int i = 0; i < n; i++){
        scanf("%d",&nums[i]);
    }
    big = nums[0];
    small = 1000000;

    for (int j = 0; j < n; j++){    
        nums[j]>big ?big =nums[j]:big;
        nums[j]<small && nums[j] >= 0  ?small =nums[j]:small;   
    }

    printf("The big number is %d\n",big);
    printf("The small number is %d\n",small);


}