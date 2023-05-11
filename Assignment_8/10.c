
#include <stdio.h>

int main()
{
    int i, j, k, rows;
    printf("Enter the number of rows under 10\n");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        k = 1;
        for (j = 1; j <= rows*2-1; j++)
        {
            if ((j <= rows+1 - i) || (rows-1 + i <= j))
            {
                j < rows ? printf("%d", k++) : printf("%d", k--);
            }

            else
            {
                printf(" ");
                if (j == rows)
                    k--;
            }
        }
        printf("\n");
    }

    return 0;
}
