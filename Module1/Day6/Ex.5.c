/* Write a program to demonstrate the swapping the fields of two structures using pointers */
#include <stdio.h>

// Structure to represent a point with x and y coordinates
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two Point structures using pointers
void swapPoints(struct Point* point1, struct Point* point2) {
    // Swap the x coordinates
    int tempX = point1->x;
    point1->x = point2->x;
    point2->x = tempX;

    // Swap the y coordinates
    int tempY = point1->y;
    point1->y = point2->y;
    point2->y = tempY;
}

int main() {
    struct Point point1, point2;

    // Read the coordinates of the first point
    printf("Enter the coordinates of the first point (x y): ");
    scanf("%d %d", &(point1.x), &(point1.y));

    // Read the coordinates of the second point
    printf("Enter the coordinates of the second point (x y): ");
    scanf("%d %d", &(point2.x), &(point2.y));

    // Display the original points
    printf("\nOriginal Points:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of the points
    swapPoints(&point1, &point2);

    // Display the swapped points
    printf("\nSwapped Points:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
