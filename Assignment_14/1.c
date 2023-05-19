#include <stdio.h>

int main()
{
    int inp[10],sum = 0;

    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &inp[i]);
        sum = sum + inp[i];
    }
    printf("Sum : %d",sum);

    return 0;
}