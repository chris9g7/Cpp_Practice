#include <stdio.h>
void primeFactor(int num);
int main()
{
    int x;

    printf("Enter a number\n");
    scanf("%d", &x);

    primeFactor(x);
    return 0;
}

void primeFactor(int num)
{
    for (int i = 2; num != 1; i++)
    {
        while (num % i == 0)
        {
            num = num / i;
            printf("%d\n", i);
        }
    }
}
