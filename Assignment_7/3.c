
#include <stdio.h>

int main()
{
    int n, cur = 1, pre = 0, sum;

    printf("Enter the number n\n");
    scanf("%d", &n);

    for (int i = 0; 1; i++)
    {
        sum = pre + cur;
        pre = cur;
        cur = sum;

        if (n == sum)
        {
            printf("Fibonacci series number");
            break;
        }
        if (sum > n) // if n not found it will not found
        {
            printf("Not Fibonacci series number");
            break;
        }
    }
    return 0;
}