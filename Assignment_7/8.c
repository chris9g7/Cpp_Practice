#include <stdio.h>

int main()
{
    int n, i, x, flag;

    printf("Enter a number x \n");
    scanf("%d", &x);

    for (n = x; 1; n++)
    {
        flag = 0;

        for (i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
                flag = 1;
        }

        if (flag == 0)
        {
            printf("%d\n", n);
            break;
        }
    }

    return 0;
}