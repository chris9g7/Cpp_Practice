
#include <stdio.h>

// function declaration
int digChecker(int n, int dig);

int main()
{
    int n, dig, flag;

    printf("Enter a number n and\nEnter a digit \n");
    scanf("%d%d", &n, &dig);

    // calling the function and checking the condition
    (digChecker(n, dig) == 1) ? printf("%d occurred in %d", dig, n) : printf("%d not occurred in %d", dig, n);

    return 0;
}
// defining the function
int digChecker(int n, int dig)
{
    int rem, i = 0, flag = 0;

    while (n)
    {
        rem = n % 10;
        if (rem == dig)
            return flag = 1;

        n = n / 10;
        i++;
    }
}