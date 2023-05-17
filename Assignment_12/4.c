#include <stdio.h>
void printEven(int n);
int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    printEven(n);
    return 0;
}


void printEven(int n)
{
    if (n >= 1)
    {
        printf(" %d", 2*n-1);
         printEven(n - 1);
    }
}