#include <stdio.h>
//using break
int main() 
{
    int i;

    printf("Printing numbers, stop when 5 is reached:\n");
    for (i = 1; i <= 10; i++) 
    {
        if (i == 5) 
        {
            break; // Exit the loop when i is 5
        }
        printf("%d ", i);
    }

    return 0;
}

