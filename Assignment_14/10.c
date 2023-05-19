#include <stdio.h>

int main()
{
    int a[10], b[10];

    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }

    printf("Copy an array");
    for (int i = 0; i <= 9; i++)
        printf(" %d", b[i]);

    return 0;
}
