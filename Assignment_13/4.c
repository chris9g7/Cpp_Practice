#include <stdio.h>
int SumSqr(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("Sum of square : %d", SumSqr(N));
    return 0;
}

// this function calculate the sum of squares of a natural numbers
int SumSqr(int n)
{
    if (n == 1)
        return 1;

    return n*n + SumSqr(n - 1);
}