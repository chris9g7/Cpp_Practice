#include <stdio.h>

int main()
{
    int a, b, c, D;
    printf("Enter the value of a b and c\n");
    scanf("%d%d%d", &a, &b, &c);

//using quadratic formaula d=b^2-4ac

    D = (b*b - 4*a*c);

    if (D > 0)
        printf("Real & Distinct roots\n");

    else if (D < 0)
        printf("Real & Equal roots\n");

    else
        printf("Imaginary roots\n");
    return 0;
}