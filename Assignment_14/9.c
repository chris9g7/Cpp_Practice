#include <stdio.h>
int main()
{
    int inp[10];
    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        printf("a[%d] : ", i);
        scanf("%d", &inp[i]);
    }

    printf("reverse order : ");

    for (int i = 9; i >= 0; i--)
        printf(" %d", inp[i]);

    return 0;
}
