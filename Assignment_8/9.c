
#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 4; i++)
    {
        k = 1;
        for (j = 1; j <= 7; j++)
        {
            if (i <= j && j <= 8 - i)
                j < 4 ? printf("%d", k++) : printf("%d", k--);

            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}