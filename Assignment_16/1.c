#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], c[3][3];

    printf("Enter 9 elements of matrix\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter 9 elements of matrix\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("Addition of two martix\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf(" %2d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}