#include <stdio.h>
int fibo(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
        printf(" %d", fibo(i));
    return 0;
}

// this function calculate the fibonacci value and return the value
int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}