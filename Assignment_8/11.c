#include <stdio.h>

int main()
{
    int i, j, k, rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        k = 'A';
        for (j = 1; j <= 2 * rows - 1; j++)
        {
            if ((rows + 1 - i <= j) && (j <= rows - 1 + i))
                j < rows ? printf("%c", k++) : printf("%c", k--);

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}