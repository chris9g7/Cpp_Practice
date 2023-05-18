#include <stdio.h>
int power(int n, int p);
int main()
{
    int num, pow;
    printf("Enter a number and its power\n");
    scanf("%d%d", &num, &pow);

    printf("%d^%d : %d", num, pow, power(num, pow));
    return 0;
}

// this function calculate the power of given number
int power(int num, int pow)
{
    if (pow == 1)
        return num;

    return power(num, pow - 1) * num;
}
