#include <stdio.h>
void printRev(int n);
int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);
    
    printRev(n);
    return 0;
}



void printRev(int n)
{
    if (n > 0)
    {
        printf(" %d", n);
        printRev(n - 1);
    }
}