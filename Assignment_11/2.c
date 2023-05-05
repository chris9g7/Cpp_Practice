#include <stdio.h>
int hcfCal(int a, int b);

int main()
{
    int x, y;

    printf("Enter two numbers x and y \n");
    scanf("%d%d", &x, &y);

    printf("HCF : %d ", hcfCal(x, y));
    return 0;
}

int hcfCal(int a, int b)
{
    int hcf = 0, min;
    min = a < b ? a : b;

    for (int i = 1; i <= min; i++) // 2, 4 >* 1
    {
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }
    return hcf;
}