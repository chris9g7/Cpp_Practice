#include <stdio.h>
int printsUnique(int b[], int N);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printsUnique(a, N);
    return 0;
}

// this function prints the unique values in an array
int printsUnique(int b[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (b[i] != b[i + 1])
        {
            printf(" %d", b[i]);
        }
    }
    printf(" %d", b[N - 1]);
    return 0;
}