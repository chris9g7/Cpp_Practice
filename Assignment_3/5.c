#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    if ((100 <= x) && (x <= 999))
        printf("Three-digit Number");

    else
        printf("Not a three-digit Number");
    return 0;
}