#include <stdio.h>
void printRevE(int n);
int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    printRevE(n);
    return 0;
}


void printRevE(int n)
{
    if (n >= 1)
    {   
        printf(" %d", 2*n);
         printRevE(n - 1);
    }
}