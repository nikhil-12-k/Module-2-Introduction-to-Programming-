#include <stdio.h>
#include <string.h> // Required for strcat() and strlen()

int main() {
    char str1[100], str2[100];  // Arrays with enough space to store strings
    char result[200];           // Array to hold the concatenated result

    // Taking input from the user
    printf("Enter the first string: ");
    gets(str1);  // Read first string

    printf("Enter the second string: ");
    gets(str2);  // Read second string

    // Copy the first string into result
    strcpy(result, str1);

    // Concatenate the second string to result
    strcat(result, str2);

    // Display the concatenated string
    printf("\nConcatenated String: %s\n", result);

    // Display the length of the concatenated string
    printf("Length of Concatenated String: %lu\n", strlen(result));

    return 0;
}
