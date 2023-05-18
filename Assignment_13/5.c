#include <stdio.h>
int SumDig(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("Sum of digits : %d", SumDig(N));
    return 0;
}

// this function calculate the sum of digits

int SumDig(int n)
{
    int rem;
    if (n == 0)
        return 0;

    rem = n % 10;
    return rem + SumDig(n / 10);
}
