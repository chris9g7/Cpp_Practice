#include <stdio.h>

int main()
{
    int arm = 0, n, rem, cpy;

    printf("Enter a number\n");
    scanf("%d", &n);
    cpy = n;

    while (n > 0)
    {
        rem = n % 10;
        arm = arm + rem * rem * rem;
        n = n / 10;
    }
    (cpy == arm) ? printf("Armstrong numebr") : printf("Not an Armstrong number");

    /* we can this logic as well
    store = f * f * f + s * s * s + t * t * t;

    if (p == store)
        printf("arm num");
    
    else
        printf("not arm");*/

    return 0;
}