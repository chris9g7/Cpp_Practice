#include <stdio.h>

int main()
{
    int x, y, sum = 0, resultNumber;

    printf("Enter the number x\n");
    scanf("%d", &x);

    resultNumber = x * 10;

    while (x != 0)
    {
        y = x % 10;
        x = x / 10;
        sum = sum + y;
    }

    if (x == 0)
    {
        resultNumber = resultNumber + sum;
        printf("Sum of the digits is : %d", resultNumber);
    }

    return 0;
}