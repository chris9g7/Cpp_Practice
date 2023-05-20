#include <stdio.h>
int duplicateValue(int b[], int N);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    (duplicateValue(a, N) == 0) ? printf("Not found ") : printf("First Adjacent Repeted : %d", (duplicateValue(a, N)));
}

// this function find the repeated value
int duplicateValue(int b[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        if (b[i] == b[i+1])
        {
           return b[i+1];
        }
        
    }
    return 0;
}