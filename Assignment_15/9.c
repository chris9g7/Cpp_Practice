#include <stdio.h>
void mergeArray(int a[], int n, int b[], int m, int c[], int add);
int main()
{

    int n, m, a[50], b[50], c[100], add;
    printf("Enter the size of  two array a nd b\n");
    printf("Enter the size of a array\n");
    scanf("%d", &n);

    printf("Enter the size of b array\n");
    scanf("%d", &m);

    printf("Enter %d numbers in a array\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter %d numbers in b array\n", m);
    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    add = m + n;

    mergeArray(a, n, b, m, c, add);
    return 0;
}

void mergeArray(int a[], int n, int b[], int m, int c[], int add)
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }

        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n)
    {
        c[k] = a[i];
        k++;
        i++;
    }

    while (i < m)
    {
        c[k] = a[j];
        k++;
        j++;
    }

    for (k = 0; k < add; k++)
    {
        printf(" %d", c[k]);
    }
}
