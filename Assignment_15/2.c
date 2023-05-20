#include <stdio.h>
int smallestNum(int b[], int N);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Smallest number : %d", smallestNum(a,N));
    return 0;
}

int smallestNum(int b[], int N)
{
    int min = b[0];

    for (int i = 0; i < N; i++)
    {
        if (min > b[i])
            min = b[i];
    }

    return min;
}