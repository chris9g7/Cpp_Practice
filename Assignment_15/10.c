#include <stdio.h>
void printsFrequency(int b[], int N);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers less than < %d\n", N, N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printsFrequency(a, N);

    return 0;
}

void printsFrequency(int b[], int N)
{
    int i, hash[100] = {0};

    for (i = 0; i <= N - 1; i++)
    {
        hash[b[i]]++; // hash point the index and increment the value
    }

    for (i = 0; i <= N - 1; i++)
    {
        if (hash[i] != 0)
        {
            printf("Number : %d   ;   Frequency : %d\n", i, hash[i]);
        }
    }
}