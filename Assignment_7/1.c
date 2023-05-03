#include <stdio.h>

int main()
{
    int n, cur = 1, pre = 0, sum ;

    printf("Enter the number n\n");
    scanf("%d", &n);
    printf("0\n");
    printf("1\n");
    for (int i = 0; i < n - 2; i++)
    {
        sum = pre + cur;
        printf("%d\n", sum);
        pre = cur;
        cur = sum;
    }

    return 0;
}