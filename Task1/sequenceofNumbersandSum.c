#include <stdio.h>


void Sequence();
int main(){


    Sequence();


    
    return 0;
}



void Sequence(){
    int N, M;

    while (1) {
        scanf("%d %d", &N, &M);

        // Terminate the program if any number is less than or equal to zero
        if (N <= 0 || M <= 0) {
            break;
        }

        // Ensure N is the smaller value and M is the larger value
        if (N > M) {
            int temp = N;
            N = M;
            M = temp;
        }

        int sum = 0;
        
        // Print numbers between N and M (inclusive) and calculate the sum
        for (int i = N; i <= M; i++) {
            printf("%d ", i);
            sum += i;
        }

        // Print the sum
        printf("sum =%d\n", sum);
    }
}



// incodeforces : https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/311711132