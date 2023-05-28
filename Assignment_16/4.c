#include <stdio.h>

int main()
{
    int matrix[3][3], trans[3][3], sum = 0;
    printf("Enter 9 elements of matrix\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("sum of right diagonal\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if (i == j)
            {
                sum = sum + matrix[i][j];
            }
            trans = 
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf(" %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}