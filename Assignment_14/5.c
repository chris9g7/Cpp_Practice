#include <stdio.h>

int main()
{
    int inp[10], min;
    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &inp[i]);
        min = inp[0];
    }
    
    for (int i = 0; i <= 9; i++)
    {
        if (min > inp[i])
            min = inp[i];
    }

    printf("Minimum number : %d", min);

    return 0;
}
