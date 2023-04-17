#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a number x and y\n");
    scanf("%d%d", &x, &y);

    if (x > y)
        printf("x is greater %d", x);

    else if (x == y)
        printf("x and y both are the same value");

    else
        printf("y is greater %d", y);

    return 0;
}