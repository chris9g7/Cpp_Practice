#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    if ((x % 3 == 0) && (x % 2 == 0))
        printf("divisible by 3 and 2");

    else
        printf("Not divisible by 3 and 2");
        
    return 0;
}