#include <stdio.h>

int main()
{
    int N;
    printf("Enter a number N\n");
    scanf("%d", &N);
    // (using N-1 for exact output )
    for (int i = (N - 1); i >= 0; i--)
    {
        printf("%d\n", 2 * i); // for even number in reverse order
    }

    return 0;
}