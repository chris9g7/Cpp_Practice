#include <stdio.h>
void printRevO(int n);
int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    printRevO(n);
    return 0;
}


void printRevO(int n)
{
    if (n >= 1)
    {
        printRevO(n - 1);
        printf(" %d", 2*n);
    }
}