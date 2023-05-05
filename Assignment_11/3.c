#include <stdio.h>
int primeChecker(int num);
int main()
{
    int x;
    printf("Enter a number x \n");
    scanf("%d", &x);

    // calling the function and checking the condition using ternery operator;
    (primeChecker(x) == 1) ? printf("not a prime number") : printf("prime number");

    return 0;
}
int primeChecker(int num)
{
    int flag = 0;
    for (int i = 2; i < num/2; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            return flag;
        }
    }
}