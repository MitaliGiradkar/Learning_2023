#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5};
    int sum = 0;
    float average;
    int i;


    for (i = 0; i < SIZE; i++) {
        sum += array[i];
    }

    average = (float)sum / SIZE;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}