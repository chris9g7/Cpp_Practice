#include <stdio.h>

void showPrime(int x, int y);
int main()
{
    int x, y;
    printf("enter the number x and y\n");
    scanf("%d%d", &x, &y);

    showPrime(x, y);
    return 0;
}
// this function prints the prime number between x and y ranges
void showPrime(int x, int y)
{
    for (int n = x; n <= y; n++)
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