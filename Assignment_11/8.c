
#include <stdio.h>
int fact(int n);
int comb(int n, int r);
void pascal(int n);

int main()
{
    int rows;
    printf("Enter the number of rows of pascal's triangle\n");
    scanf("%d", &rows);
    pascal(rows);

    return 0;
}
// this function calculate the factorial of a number

int fact(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact = fact * i;  

    return fact;
}
// this function calculate the number of combinations of a number
int comb(int n, int r)
{
    int comb;
    comb = fact(n) / (fact(r) * fact(n - r));
    return comb;
}

// this function prints the pascal's triangle on the screen

void pascal(int line)
{
    int i, j, r, k;

    for (int i = 1; i <= line; i++)
    {
        k = 1;
        r = 0;
        for (int j = 1; j <= 2 * line - 1; j++)
        {
            if (line + 1 - i <= j && j <= line - 1 + i && k)
            {
                printf("%2d", comb(i - 1, r));
                r++;
                k = 0; // toggle the value of *
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
}
