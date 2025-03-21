#include <stdio.h>



void getAgeInDays(int age);

int main(){
    int days;
    printf("Enter your age by days\n");
    scanf("%d",&days);

    getAgeInDays(days);


    return 0;
}




void getAgeInDays(int age){

    int year = age /365;
    int month = (age %365)/30;
    int day = (age %365)%30;


    printf("You are \n %d years \n %d months \n %d days\n",year,month,day);

    return ;
}


/// in codeforces: https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/287401818