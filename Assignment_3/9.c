#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the number x, y and z\n");
    scanf("%d%d%d", &x, &y, &z);

    if (x > y)
    {
        if (x > z)
            printf("x is greater %d", x);

        else
            printf("z is greater %d", z);
    }

    else
    {
        if (y > z)
            printf("y is greater %d", y);

        else
            printf("z is greater %d", z);
    }

    // this is an optimum solution
    /*
        if ((x > y) && (x > z))
            printf("%d is greater", x);

        else if ((y > x) && (y > z))
            printf("%d is greater", y);

        else if ((z > x) && (z > y))
            printf("%d is greater", z);

        else
            printf("Greatest numbers are reappered");
    */

    return 0;
}