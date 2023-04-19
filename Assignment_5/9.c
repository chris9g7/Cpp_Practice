#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        printf("%d\n", i * i * i); // prints the cube of first 10 numbers on screen
    }

    return 0;
}