
#include <stdio.h>
int hcf(int, int);
int main()
{
    int a, b, result;
    printf("Enter a and b\n");
    scanf("%d%d", &a, &b);
    result = hcf(b, a % b);

    printf("HCF : %d", result);
    return 0;
}

// this function calculate the hcf
int hcf(int a, int b)
{
    if (b == 0)
        return a;

    hcf(b, a % b);
}