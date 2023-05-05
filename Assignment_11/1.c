#include <stdio.h>
int lcmCal(int a, int b);

int main()
{
    int x, y;

    printf("Enter two numbers x and y \n");
    scanf("%d%d", &x, &y);

    printf("LCM : %d ", lcmCal(x, y));
    return 0;
}

int lcmCal(int a, int b)
{

    for (int i = 1; i < a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
            return i;
    }
}