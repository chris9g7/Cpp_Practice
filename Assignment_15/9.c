#include <stdio.h>
void mergeArray(int a[], int b[], int c[], int N);
int main()
{

    int N, a[50], b[50], c[100];
    printf("Enter the size of array a nd b\n");
    scanf("%d", &N);

    printf("Enter %d numbers in both array\n", N, N);
    for (int i = 0; i < N; i++)
        scanf("%d%d", &a[i], &b[i]);

    // for (int i = 0; i < N; i++)
    // {
    //     printf(" a[%d] : %d\n", i, a[i]);

    //     printf(" b[%d] : %d\n", i, b[i]);
    // }
    mergeArray(a, b, c, N * 2);
    return 0;
}

void mergeArray(int a[], int b[], int c[], int N)
{
    int i = 0, j = 0, k = 0;

    for (k = 0; k < N ; k++)
    {

        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
    }

    for (k = 0; k < N ; k++)
    {
        printf(" %d", c[k]);
    }
}
