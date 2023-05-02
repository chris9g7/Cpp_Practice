#include <stdio.h>
int caluFactorial(int);

int main()
{
    int n, sub, r, NofComb;
    printf("Enter a number of items(n) n\nEnter a number of items(r) r\n");
    scanf("%d%d", &n, &r);
    sub = n - r;
    n = caluFactorial(n);
    sub = caluFactorial(sub);
    r = caluFactorial(r);

    
    NofComb = n/(sub*r);
    printf("Number of combitions : %d", NofComb);

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
