#include <stdio.h>

int main()
{

    int i, hcf, x, y, min, lcm;

    printf("Enter two numbers x and y\n");
    scanf("%d%d", &x, &y);

    min = x > y ? y : x;

    for (i = 1; i <= min; i++)
    {
        if ((x % i == 0) && (y % i == 0))
            hcf = i;
        }

    lcm = x * y / hcf;
    
    printf("HCF is %d\n", hcf);
    printf("LCM is %d", lcm);

    return 0;
}