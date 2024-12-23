#include <stdio.h>

int main()
{
    int marks[4];
    printf("Enter numbers to check if they are Even");

    for (int i = 0; i <= 3; i++)
    {
        scanf("%d", &marks[i]);
    }

    printf("\n");

    printf("Even : ");
    for (int i = 0; i <= 3; i++)
    {

        if (marks[i] % 2 == 0)
        {
            printf("%d ", marks[i]);
        }
    }
}
