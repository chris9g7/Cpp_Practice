#include <stdio.h>

int main()
{

    int x, result, count = 0;
    printf("Enter a number x\n");
    scanf("%d", &x);

    while (x)
    {
        result = x & 1;
        count++;
        if (result == 1)
        {
            printf("Lsb is : %d", count);
            break;
        }
        x = x >> 1;
    }

    return 0;
}