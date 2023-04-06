#include <stdio.h>

int main()
{

    int x, y;
    printf("Enter the number x\n");
    scanf("%d", &x);

    y = x / 10;
    x = y * 10;
    printf("Removed the last one x = %d ", x);

    return 0;
}