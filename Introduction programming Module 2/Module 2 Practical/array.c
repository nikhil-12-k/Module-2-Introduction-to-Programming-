// #include <stdio.h>

// int main() {
//     int arr[5];
//     int i;

//     // Taking input for 1D array
//     printf("Enter 5 integers:\n");
//     for (i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Displaying elements of 1D array
//     printf("The 5 integers are:\n");
//     for (i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\n\n");
//     return 0;
// }

//2D array array (3x3 matrix) and calculate the sum of all elements.

#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int i, j, sum = 0;

    // Input elements for 3x3 matrix
    printf("Enter 9 integers for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    // Displaying the 3x3 matrix
    printf("\nThe 3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Displaying the sum of all elements
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
