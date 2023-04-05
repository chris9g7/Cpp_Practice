#include <stdio.h>
int main()
{
    int x, y, z;

    printf("Enter two numbers x and y\n");
    scanf("%d %d", &x, &y);
    
    // using third variable for storing the value of x in z variable
    z = x;
    x = y;
    y = z;

    printf("Swap values of x and y \n x=%d  y=%d", x, y);

    return 0;
}