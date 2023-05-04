#include <stdio.h>

int main()
{
    int n, i, x, y, flag;

    printf("Enter the ranges between x and y\n");
    scanf("%d%d", &x, &y);

    for (n = x; n <= y; n++)
    {
        flag = 0;

        for (i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
                flag = 1;
        }

        if (flag == 0)
            printf("%d\n", n);
    }

    return 0;
}
