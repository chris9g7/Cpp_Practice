#include <stdio.h>

int main()
{
    int x, y, sum = 0;

    printf("Enter the 3-digit number\n");
    scanf("%d", &x);

    y = x % 10;
    x = x / 10;
    sum = sum + y;

    y = x % 10;
    x = x / 10;
    sum = sum + y;

    y = x % 10;
    x = x / 10;
    sum = sum + y;

    printf("Sum of the digits is : %d", sum);

    /*
    using loop we can do this questions as well  its runs until the codition is false
    when x = 0 it will false and sum is calculated in the sum variable

     while (x != 0)
     {
         y = x % 10;
         x = x / 10;
         sum = sum + y;
    }  */

    return 0;
}