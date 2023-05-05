#include <stdio.h>

int main()
{
    int n, cur = 1, pre = 0, sum;

    printf("Enter the number n\n");
    scanf("%d", &n);

    for (int i = 0; i < n-2 ; i++)
    {
        sum = pre + cur;
        pre = cur;
        cur = sum;
    }
    printf("Nth of fibonnaci series :  %d\n", sum);

    return 0;
}