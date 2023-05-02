#include <stdio.h>
int caluFactorial(int num);

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    printf("%d! : %d", x, caluFactorial(x));

    return 0;
}


int caluFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
