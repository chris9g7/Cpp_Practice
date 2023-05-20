#include <stdio.h>
void printsRev(int b[], int);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printsRev(a, N);
    return 0;
}

void printsRev(int b[], int N)
{
    printf("Reverse order : ");
    for (int i = N - 1; i >= 0; i--)
    {
        printf(" %d", b[i]);
    }
}