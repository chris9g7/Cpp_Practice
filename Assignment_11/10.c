#include <stdio.h>
int caluFactorial(int num);

int main()
{
    int x, sum = 0;
    printf("Enter a number x\n");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++){
        
// calling the function and storing in sum var..
        sum = sum + caluFactorial(i)/i;}

    printf("sum of the series :%d", sum);

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
