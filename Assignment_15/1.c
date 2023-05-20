#include <stdio.h>
int greatestNum(int b[], int);
int main()
{
    int N, a[50];
    printf("Enter the size of an array\n");
    scanf("%d", &N);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("Greatest number : %d", greatestNum(a, N));
    return 0;
}

int greatestNum(int b[], int N)
{
    int max = b[0];

    for (int i = 0; i < N; i++)
    {
        if (max < b[i])
            max = b[i];
    }

    return max;
}