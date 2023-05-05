#include <stdio.h>

int main()
{
    int f, s, t, x;
    printf("Armstrong numbers under 1000 are:\n");

    for (int i = 0; i < 1000; i++)
    {
        x = i;
        f = x % 10;
        x = x / 10;

        s = x % 10;
        x = x / 10;

        t = x % 10;
        x = x / 10;

        if (i == f*f*f + s*s*s + t*t*t)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}