#include <stdio.h>
int caluFactorial(int);

int main()
{
    int n, sub, r, noOfArr;
    printf("Enter a number of items(n) n\nEnter a number of items(r) r\n");
    scanf("%d%d", &n, &r);
    sub = n - r;
    n = caluFactorial(n);
    sub = caluFactorial(sub);

    noOfArr = n / sub;
    printf("Number of  Arrangements : %d", noOfArr);

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
