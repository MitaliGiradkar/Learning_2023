#include <stdio.h>
#include <ctype.h>

// Function to convert text to upper case
void convertToUpper(FILE *file) {
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(toupper(ch), file);
    }
}

// Function to convert text to lower case
void convertToLower(FILE *file) {
    int ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(tolower(ch), file);
    }
}

// Function to convert text to sentence case
void convertToSentenceCase(FILE *file) {
    int ch;
    int isFirstCharInSentence = 1;
    while ((ch = fgetc(file)) != EOF) {
        if (isFirstCharInSentence && isalpha(ch)) {
            fputc(toupper(ch), file);
            isFirstCharInSentence = 0;
        } else {
            fputc(tolower(ch), file);
            if (ch == '.' || ch == '?' || ch == '!') {
                isFirstCharInSentence = 1;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp <option> <source_file> <destination_file>\n");
        return 1;
    }

    char *option = argv[1];
    char *sourceFileName = argv[2];
    char *destinationFileName = argv[3];

    FILE *sourceFile, *destinationFile;

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL) {
        printf("Unable to create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Perform the appropriate case conversion based on the user option
    if (strcmp(option, "-u") == 0) {
        convertToUpper(sourceFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLower(sourceFile);
    } else if (strcmp(option, "-s") == 0) {
        convertToSentenceCase(sourceFile);
    } else {
        int ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, destinationFile);
        }
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
