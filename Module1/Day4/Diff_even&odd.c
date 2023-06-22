#include <stdio.h>

#define SIZE 7 

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int evenSum = 0;
    int oddSum = 0;
    int difference;
    int i;

    // Calculating the sum of even and odd elements
    for (i = 0; i < SIZE; i++) {
        if (array[i] % 2 == 0) {
            evenSum += array[i];
        } else {
            oddSum += array[i];
        }
    }

    
    difference = evenSum - oddSum;


    printf("Difference between even and odd elements: %d\n", difference);

    return 0;
}