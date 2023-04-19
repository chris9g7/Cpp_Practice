#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        printf("%d\n", 2 * i); // for even number
    }

    return 0;
}