#include <stdio.h>

int main()
{

    int N, sum = 0;

    printf("Enter the number N\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }

    printf("Sum of the numbers %d", sum);

    return 0;
}