#include <stdio.h>

int main()
{
    int x, rev = 0, rem;
    printf("Enter a number x\n");
    scanf("%d", &x);

    while(x)
    {
        rem = x % 10;
        x = x / 10;

        rev = rev * 10 + rem;
    }
    printf("Reverse number of x : %d", rev);

    return 0;
}