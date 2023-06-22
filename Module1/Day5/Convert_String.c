#include <stdio.h>

int main() {
    char str[] = "625278"; // Input string
    int res = 0; // Result variable
    int i = 0; // Index variable
    
    while (str[i] != '\0') {
        int ival = str[i] - '0'; // Convert character to integer value
        res = res * 10 + ival; // Update result by multiplying by 10 and adding the current integer value
        i++; // Move to the next character
    }
    
    printf("Converted integer value: %d\n", res);
    
    return 0;
}
