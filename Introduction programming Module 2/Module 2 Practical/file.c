#include <stdio.h>

int main() {
    FILE *file;
    char str[100] = "This is a sample text written to the file.";
    char ch;

    // Step 1: Create and write to a file
    file = fopen("sample.txt", "w");  // Open file in write mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    fprintf(file, "%s", str);  // Write string to file
    fclose(file);  // Close the file after writing
    printf("Data written to file successfully.\n");

    // Step 2: Open the file again to read and display contents
    file = fopen("sample.txt", "r");  // Open file in read mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nContents of the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);  // Close the file after reading

    return 0;
}
