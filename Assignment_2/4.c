#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter two numbers x and y\n");
    scanf("%d %d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("Swap values of x and y \n x=%d  y=%d", x, y);

    return 0;
}