#include <stdio.h>
int countDuplicate(int b[], int N);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Total duplicate numbers : %d", (countDuplicate(a, N)));
}

// this function finds the repeated value
int countDuplicate(int b[], int N)
{
    int count=0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
    }
    return count;
}