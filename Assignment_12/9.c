#include <stdio.h>
void decToOctal(int n);
int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    printf("Octal : ");
    decToOctal(x);
    return 0;
}

// this function convert decimal to octal
void decToOctal(int n)
{
    if (n >= 1)
    {
        decToOctal(n / 8);
        printf("%d", n % 8);
    }
}
