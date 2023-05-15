
#include <stdio.h>

int main()
{
    int i, j;
    printf("\n");

    for (i = 1; i <= 3 ; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if (4 - i <= j && j <= 6 + i || 14 - i <= j && j <= 16 + i)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= 18; j++)
        {
            if (j <= 6 || 12 <= j)
                printf("*");

            if (j == 8)
                printf("MySirG");
        }
        printf("\n");
    }

    for (i = 2; i <= 10; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if (i <= j && j <= 20 - i)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
