#include <stdio.h>

int main()
{
    int a[10], larg, sLarge;

    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        larg = a[0];
    }

    for (int i = 0; i <= 9; i++)
    {
        if (larg <= a[i])
        {
            sLarge = larg;
            larg = a[i];
        }

        else if (sLarge < a[i])
            sLarge = a[i];
    }
    printf("second greatest : %d ", sLarge);
    return 0;
}