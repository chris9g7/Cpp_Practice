#include <stdio.h>

int main()
{

    int i, hcf, x, y, min;

    printf("Enter two numbers x and y\n");
    scanf("%d%d", &x, &y);

    min = x > y ? y : x;

    for (i = 1; i <= min; i++)
    {
        if ((x % i == 0) && (y % i == 0))
            hcf = i;
    }

    (hcf == 1) ? printf("co-prime number\n") : printf("not a co-prime number\n");

    return 0;
}