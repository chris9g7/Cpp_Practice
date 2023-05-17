#include <stdio.h>
void printOdd(int n);
int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    printOdd(n);
    return 0;
}

void printOdd(int n)
{
    if (n >= 1)
    {
        printOdd(n - 1);
        printf(" %d", 2*n-1);
    }
}