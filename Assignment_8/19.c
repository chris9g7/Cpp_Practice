
#include <stdio.h>

int main()
{
    int i, j, k = 0;

    for (i = 1; i <= 13; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if (6 - i <= j && j <= 4 + i){
               
                printf("*");}

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
