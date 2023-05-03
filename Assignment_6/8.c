#include <stdio.h>

int main()
{
    int x, flag = 0;

    printf("Enter the number x\n");
    scanf("%d", &x);

    for (int i = 2; i < x/2; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Not a prime number\n");

    else
        printf("prime number\n");

    return 0;
}