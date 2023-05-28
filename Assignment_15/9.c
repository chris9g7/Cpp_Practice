#include <stdio.h>
void mergeArray(int a[], int b[], int c[] );
int main()
{

    int n,m, a[50], b[50], c[100];
    printf("Enter the size of  two array a nd b\n");
    printf("Enter the size of a array\n");
    scanf("%d", &n);

    printf("Enter the size of b array\n");
    scanf("%d", &m);

    printf("Enter %d numbers in both array\n", n,m,);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("second\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &b[i]);

    mergeArray(a, b, c);
    return 0;
}

void mergeArray(int a[], int b[], int c[] )
{
    int i = 0, j = 0, k = 0;

    for (k = 0; k < 10; k++)
    {

        if (i >= 5)
        {
            while (k < 10)
            {
                c[k] = b[j];
                j++;
                if (k == 10)
                {
                    break;
                }
            }
        }

      else  if (a[i] < b[j])
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

    for (k = 0; k < 10; k++)
    {
        printf(" %d", c[k]);
    }
}
