#include <stdio.h>
int Sum(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("Sum : %d", Sum(N));
    return 0;
}

// this function calculate the sum of n numbers
int Sum(int n)
{
    if (n == 1)
        return 1;

    return n + Sum(n - 1);
}