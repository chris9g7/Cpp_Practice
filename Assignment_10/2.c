
#include <stdio.h>

float SimpleInterest(float p, float r, float t);

int main()
{
    float p, r, t;
    printf("Enter the principle amount\nEnter the rate of interest\nEnter the number of years\n");
    scanf("%f%f%f", &p, &r, &t);
    printf("Simple Interest : %.2f", SimpleInterest(p, r, t));
    return 0;
}

// this function calulates simple interest
float SimpleInterest(float p, float r, float t)
{   
     r = r / 100;
    return p*(1 + r * t);
}