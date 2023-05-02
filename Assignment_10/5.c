#include <stdio.h>
void showOdd(int num);

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);
    showOdd(x);
    return 0;
}

void showOdd(int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("%d\n", 2*i+1);
    }
}
