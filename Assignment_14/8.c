#include <stdio.h>

int main()
{
    int a[10], small, sSmall;

    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        small = a[0];
    }

    for (int i = 0; i <= 9; i++)
    {
        if (small >= a[i])
        {
            sSmall = small;
            small = a[i];
        }

        else if (sSmall > a[i])
            sSmall = a[i];
        
    }
    printf("second smallest : %d ", sSmall);
    return 0;
}