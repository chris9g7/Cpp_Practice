#include <stdio.h>
void prinfN(int n);
int main()
{
    int n;
    printf("Enter a number n\n");
    scanf("%d", &n);

    prinfN(n);
    return 0;
}

// this is a recursive function
void prinfN(int n)
{
    if (n > 0)
    {
        prinfN(n - 1);
        printf(" %d", n);
    }
}