#include <stdio.h>

void fibonacciShow(int pre, int cur);

int main()
{
    int pre, cur;
    fibonacciShow(pre = 0, cur = 1);
    return 0;
}

void fibonacciShow(int pre, int cur)
{
    int fs, n;
    printf("Enter a number\n");
    scanf("%d", &n);

    printf("%d \n%d\n", pre, cur);
    for (int i = 1; i <= n-2; i++)
    {
        fs = pre + cur;
        printf("%d\n", fs);
        pre = cur;
        cur = fs;
    }
}