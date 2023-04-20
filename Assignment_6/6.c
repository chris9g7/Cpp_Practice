#include <stdio.h>

int main()
{

    int N, fact = 1;

    printf("Enter the number N\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)

    {
        fact = fact*i;
    }

    printf("Factorial of numeber is %d! =  %d", N, fact);

    return 0;
}