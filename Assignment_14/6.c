#include <stdio.h>
int main()
{
    int a[10], swap;
    printf("Enter 10 numbers\n");

    for (int i = 0; i <= 9; i++)
        scanf("%d", &a[i]);

    printf("Sorted array : ");
    for (int i = 0; i <= 8; i++)
    {
        for (int j = i + 1; j <= 9; j++)
        {
            if (a[i] > a[j])
            {
                swap = a[i];
                a[i] = a[j];
                a[j] = swap;
            }
        }
    }

    for (int i = 0; i <= 9; i++)
        printf("%d ", a[i]);
    
    return 0;
}
