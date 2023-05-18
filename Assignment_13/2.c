#include <stdio.h>
int SumOdd(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("Sum of odd : %d", SumOdd(N));
    return 0;
}

// this function calculate the sum of odd numbers
int SumOdd(int n)
{
    if (n == 1)
        return 1;

    return (2*n-1) + SumOdd(n - 1);
}