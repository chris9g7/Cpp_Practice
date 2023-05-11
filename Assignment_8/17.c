
#include <stdio.h>

int main()
{
    int i, j, rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= 2*rows - 1; j++)
        {
            if (i == 1 || j == i || j == 2*rows  - i)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
