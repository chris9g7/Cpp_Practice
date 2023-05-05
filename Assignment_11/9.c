#include <stdio.h>
void sqrCal();
int main()
{
    sqrCal();
    return 0;
}

void sqrCal()
{
    int n;
    printf("enter a number n \n");
    scanf("%d", &n);
    printf("square : %d", n * n);
}