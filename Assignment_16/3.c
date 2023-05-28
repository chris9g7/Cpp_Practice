#include <stdio.h>

int main()
{
    int matrix[3][3], trans[3][3];
    printf("Enter 9 elements of matrix\n");

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Tranpose of 3x3 matrix\n");
    

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
          trans[j][i] = matrix[i][j]; 
        }
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            printf(" %d", trans[i][j]);
        }
        printf("\n");
    }


    return 0;
}