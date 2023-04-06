#include <stdio.h>

int main()
{

    int x;

    printf("Enter a number\n");
    scanf("%d", &x);

    // (put the logic in the bracket) it will throw an error reason behind this == operator have higher precendce than &operator
    if ((x & 1) == 0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }

    return 0;
}