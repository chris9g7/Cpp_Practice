#include <stdio.h>
int main()
{
    int x;

    printf("Enter the number\n");
    scanf("%d", &x);

    // using / operator for getting the number without its last digit
    printf("Number is %d", x = x / 10);

    return 0;
}