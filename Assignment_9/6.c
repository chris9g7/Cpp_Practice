#include <stdio.h>

int main()
{
    int x;
    printf("Enter the year x\n");
    scanf("%d", &x);

    switch (x % 400 == 0)
    {
    case 1:
        printf("leap year");
        break;
    case 0:
        switch (x % 4 == 0)
        {
        case 1:
            printf("leap year");
            break;
        case 0:
            printf("not a leap year");
            break;
        }
    }
    return 0;
}
