#include <stdio.h>
int Count(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("Count : %d", Count(N));
    return 0;
}

// this function count number of digits
int Count(int n)
{
    int rem, count = 0;
    if (n < 10)
        return 1;

    return 1 + Count(n / 10);
}