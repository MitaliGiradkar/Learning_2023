#include <stdio.h>

int findCharType(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;  // Uppercase letters
    } else if (ch >= 'a' && ch <= 'z') {
        return 2;  // Lowercase letters
    } else if (ch >= '0' && ch <= '9') {
        return 3;  // Digits
    } else if (ch >= 32 && ch <= 126) {
        return 4;  // Printable symbols
    } else {
        return 5;  // Non-printable symbols
    }
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int type = findCharType(ch);

    switch (type) {
        case 1:
            printf("Type: Uppercase letter (A-Z)\n");
            break;
        case 2:
            printf("Type: Lowercase letter (a-z)\n");
            break;
        case 3:
            printf("Type: Digit (0-9)\n");
            break;
        case 4:
            printf("Type: Printable symbol\n");
            break;
        case 5:
            printf("Type: Non-printable symbol\n");
            break;
        default:
            printf("Type: Unknown\n");
            break;
    }

    return 0;
}
