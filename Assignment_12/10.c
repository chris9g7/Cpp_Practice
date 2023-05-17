#include <stdio.h>
void reverseNum(int n);
int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    printf("Reverse value : ");
    reverseNum(x);
    return 0;
}

// this function reverse the value of x
void reverseNum(int n)
{
    if (n)
    {
        printf("%d", n % 10);
        reverseNum(n / 10);
    }
}
