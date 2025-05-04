#include <stdio.h>

// Define a typedef for a complex number structure
typedef struct {
    float real;
    float imaginary;
} ComplexNumber;

// Function to add two complex numbers
ComplexNumber addComplexNumbers(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    
    // Add real parts and imaginary parts separately
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    
    return result;
}

int main() {
    // Declare two complex numbers
    ComplexNumber num1, num2, sum;

    // Input real and imaginary parts for the first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imaginary);

    // Input real and imaginary parts for the second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imaginary);

    // Add the complex numbers
    sum = addComplexNumbers(num1, num2);

    // Display the result
    printf("Sum of the complex numbers: %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}
