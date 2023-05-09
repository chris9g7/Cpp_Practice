#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);

    switch (x == -x)
    {
        case 1: printf("%d",x);
        break;
        case 0: printf("%d",-x+x);
    }
    return 0;
}
