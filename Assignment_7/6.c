#include <stdio.h>

int main()
{
    int flag = 0, n , i;

    for ( n = 1; n <= 100; n++)
    {
        flag = 0;
        for ( i = 2; i <= n/2; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
            }

        }
        
            if (flag == 0)
                printf("%d ", i);
    }

    return 0;
}
