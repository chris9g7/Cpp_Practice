#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    if (x <= 0)
        printf("non-positive Number");

    else
        printf("Positive Number");
    return 0;
}