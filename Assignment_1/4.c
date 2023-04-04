#include <stdio.h>

int main()
{
    float r, pi = 3.14;

    printf("Enter the radius of a circle\n");
    scanf("%f", &r);

    // using .2f for prints only two decimal values

    printf("Area of circle is %.2f having the radius %.2f", pi * r * r, r);

    return 0;
}
