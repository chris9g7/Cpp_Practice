#include <stdio.h>
int SumEven(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("Sum of even : %d", SumEven(N));
    return 0;
}

// this function calculate the sum of even numbers
int SumEven(int n)
{
    if (n == 0)
        return 0;

    return 2*n + SumEven(n - 1);
}