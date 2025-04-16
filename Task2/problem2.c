#include <stdio.h>
#include <math.h>

// Function to count digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

// Main function to print Armstrong numbers in a given range
int main() {
    int lower, upper;

    // Get input
    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d to %d are: ", lower, upper);
    
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d, ", i);
        }
    }

    printf("\b\b.\n"); // Remove trailing comma and space, add period
    return 0;
}
