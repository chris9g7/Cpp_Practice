// tsrs type function
#include <stdio.h>

// declaring a function
float AofCircle(int r);

int main()
{
    int r;
    printf("Enter the radius of a circle\n");
    scanf("%d", &r);
    printf("Area of a circle is : %.2f", AofCircle(r)); // function calling
    return 0;
}

// function definition 
float AofCircle(int r)
{
    return (3.14*r*r);
}