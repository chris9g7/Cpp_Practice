#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);
    for (int i = N; i > 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}