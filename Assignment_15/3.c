#include <stdio.h>
void shortNum(int b[], int N);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    shortNum(a, N);
}

//this function prints the sorted array
void shortNum(int b[], int N)
{
    int swap;

    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (b[i] > b[j])
            {
                swap = b[i];
                b[i] = b[j];
                b[j] = swap;
            }
        }
    }
    printf("sorted array : ");
    for (int i = 0; i < N; i++)
       printf(" %d", b[i]);
       
}