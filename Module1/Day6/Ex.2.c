/*  Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers  */

#include <stdio.h>

// Structure to represent a complex number
struct Complex {
    float real;
    float imag;
};

// Function to read a complex number from the user
void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%f", &(num->real));
    
    printf("Enter the imaginary part: ");
    scanf("%f", &(num->imag));
}

// Function to write a complex number to the console
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    
    return result;
}

int main() {
    struct Complex num1, num2, sum, product;
    
    // Read the first complex number
    printf("Enter the first complex number:\n");
    readComplex(&num1);
    
    // Read the second complex number
    printf("Enter the second complex number:\n");
    readComplex(&num2);
    
    // Write the complex numbers
    printf("\nFirst complex number:\n");
    writeComplex(num1);
    
    printf("Second complex number:\n");
    writeComplex(num2);
    
    // Add the complex numbers
    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);
    
    // Multiply the complex numbers
    product = multiplyComplex(num1, num2);
    printf("\nProduct of the complex numbers:\n");
    writeComplex(product);
    
    return 0;
}
