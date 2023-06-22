/* Write a function to display all members in the above array of structures */
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int numStudents = 3;
    struct Student students[] = {
        {1001, "Kinnr", 85.5},
        {1002, "Dolly", 92.0},
        {1003, "Emirate", 78.3}
    };

    // Display the array of structures
    displayStudents(students, numStudents);

    return 0;
}