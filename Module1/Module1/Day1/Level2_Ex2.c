#include <stdio.h>

char getGrade(int grade) {
    char letterGrade;

    switch (grade) {
        case 90 ... 100:
            letterGrade = 'A';
            break;
        case 75 ... 89:
            letterGrade = 'B';
            break;
        case 60 ... 74:
            letterGrade = 'C';
            break;
        case 50 ... 59:
            letterGrade = 'D';
            break;
        case 36 ... 49:
            letterGrade = 'E';
            break;
        case 0 ... 35:
            letterGrade = 'F';
            break;
        default:
            letterGrade = 'X';
            break;
    }

    return letterGrade;
}

int main() {
    int grade;

    printf("Enter the grade: ");
    scanf("%d", &grade);

    char letterGrade = getGrade(grade);

    printf("Grade %d -> \"Grade %c\"\n", grade, letterGrade);

    return 0;
}
