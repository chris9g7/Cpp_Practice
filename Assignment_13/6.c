#include <stdio.h>
int fact(int n);
int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);

    printf("%d! : %d",N, fact(N));
    return 0;
}

// this function calculate the factorial 
int fact(int n)
{
    if (n == 1)
        return 1;

    return n * fact(n - 1);
}