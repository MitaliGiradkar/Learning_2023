/* Use structures to find the volume and the total surface area of the box. 
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation. */
#include <stdio.h>

// Define the structure for a box
struct Box {
    float length;
    float width;
    float height;
};

// Function to calculate the volume of the box
float calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

// Function to calculate the total surface area of the box
float calculateSurfaceArea(struct Box* boxPtr) {
    float length = boxPtr->length;
    float width = boxPtr->width;
    float height = boxPtr->height;
    
    return 2 * (length * width + length * height + width * height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox; // Create a pointer to the box structure

    // Initialize the values of the box
    boxPtr->length = 5.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

    // Calculate the volume and surface area using pointers and dot operator
    float volume = calculateVolume(boxPtr);
    float surfaceArea = calculateSurfaceArea(boxPtr);

    printf("Volume: %.2f\n", volume);
    printf("Surface Area: %.2f\n", surfaceArea);

    return 0;
}
