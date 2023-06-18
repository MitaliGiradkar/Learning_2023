#include <stdio.h>
#include <stdarg.h>

void findSmallestAndLargestDigits(int n, ...) {
    va_list args;
    va_start(args, n);

    int smallest = 9;
    int largest = 0;

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);

        while (num != 0) {
            int digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            num /= 10;
        }
    }

    va_end(args);

    if (smallest == 9 && largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    findSmallestAndLargestDigits(3, 8, 156, 123450);

    return 0;
}
