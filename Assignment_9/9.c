#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    switch (x%2 == 0)
    {
    case 1:
        printf("nearest upper odd : %d ", x+1);
        break;
    case 0:
        printf("nearest lower even : %d ", x-1);
        break;
    }
    return 0;
}
