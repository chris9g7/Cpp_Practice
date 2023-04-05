#include <stdio.h>
int main()
{
    int x;

    printf("Enter the number\n");
    scanf("%d", &x);

    // using % operator for getting the remainder
    printf("Unit digit of a given number is %d", x = x % 10);

    return 0;
}