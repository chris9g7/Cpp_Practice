#include <stdio.h>

int main()
{

    float INR, USD;
    printf("Enter the x amount in INR\n");

    scanf("%f", &INR);

    USD = 1 / 81.94;
    INR = INR * USD;

    printf("%.2f$ of x INR", INR);

    return 0;
}