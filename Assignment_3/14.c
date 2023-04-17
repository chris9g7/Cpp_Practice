#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    if ((x % 7 == 0) || (x % 3 == 0))
        printf("divisible by 7 and 3");

    else
        printf("Not divisible by 7 and 3");
        
    return 0;
}