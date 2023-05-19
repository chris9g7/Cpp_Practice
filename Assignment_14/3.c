#include <stdio.h>

int main()
{
    int inp[10], even = 0, odd = 0;

    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &inp[i]);

        if (inp[i] % 2 == 0)
            even = even + inp[i];
        else
            odd = odd + inp[i];
    }
    printf("Sum of even numbers are : %d\n", even);
    printf("Sum of odd numbers are : %d", odd);

    return 0;
}