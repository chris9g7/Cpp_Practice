#include <stdio.h>
void binaryToD(int n);
int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    printf("Binary : ");
    binaryToD(x);
    return 0;
}

// this function convert decimal into binary
void binaryToD(int n)
{
    if (n >= 1)
    {
        binaryToD(n / 2);
        printf("%d", n % 2);
        
    }
}