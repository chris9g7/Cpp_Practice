
#include <stdio.h>

int main()
{
    int i, j, rows, k = 0;

    printf("Enter the odd number of rows \n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        i <= rows / 2 + 1 ? k++ : k--;
        for (j = 1; j <= rows; j++)
        {
            if (rows / 2 + 4 - k <= j && j <= rows / 2 + k)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
