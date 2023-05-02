#include <stdio.h>

int check_EorO(int num);

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    x = check_EorO(x);

    (x == 1) ? printf("Even number") : printf("Odd number");
    return 0;
}

int check_EorO(int num)
{
    if (num % 2 == 0)
        return 1;

    else
        return 0;
}
