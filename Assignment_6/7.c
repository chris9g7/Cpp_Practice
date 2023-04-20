#include <stdio.h>

int main()
{

    int x, count = 0;

    printf("Enter the number x\n");
    scanf("%d", &x);

    while (x)
    {
        x = x / 10;
        count++;
    }

    printf("Count is  %d", count);

    return 0;
}