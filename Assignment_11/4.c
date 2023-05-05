#include <stdio.h>

int showPrime(int n);
int main()
{
    int x;
    printf("enter a number\n");
    scanf("%d", &x);

    printf("Next prime number is %d", showPrime(x));
    return 0;
}

int showPrime(int x)
{
    for (int n = x; 1; n++)
    {
        int flag = 0;

        for (int i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
                flag = 1;
        }
        if (flag == 0)

            return n;
    }
}