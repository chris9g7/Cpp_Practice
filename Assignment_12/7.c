#include <stdio.h>
void printSqr(int n);

int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    printSqr(n);
    return 0;
}



void printSqr(int n)
{
    if (n >= 1)
    {
        printSqr(n - 1);
        printf(" %d", n*n);
    }
}