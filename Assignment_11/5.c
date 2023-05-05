#include <stdio.h>

void showPrime(int n);
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);

    showPrime(x);
    return 0;
}

void showPrime(int x)
{
    for (int n = 1; n <= x; n++)
    {
        int flag = 0;

        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            printf("%d\n", n);
        }
    }
}