#include <stdio.h>

int main()
{

    int N, sum = 0;

    printf("Enter the number N\n");
    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        sum = sum + (i*i);
    }
    printf("Sum of squares are %d", sum);

    return 0;
}