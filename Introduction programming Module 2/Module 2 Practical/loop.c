#include <stdio.h>

int main() {
    int i;

    // Using while loop
    printf("Numbers from 1 to 10 using while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    printf("\n\nNumbers from 1 to 10 using for loop:\n");
    // Using for loop
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n\nNumbers from 1 to 10 using do-while loop:\n");
    // Using do-while loop
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

    return 0;
}
