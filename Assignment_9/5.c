#include <stdio.h>

int main()
{
    int var;
    printf("Enter var value (1-3)\n");
    scanf("%d", &var);

    switch (var == 1)
    {
    case 1:
        printf("good");
        break;
    case 0:
        switch (var == 2)
        {
        case 1:
            printf("better");
            break;
        case 0:
            switch (var == 3)
            {
            case 1:
                printf("best");
                break;
            case 0:
                printf("invalid input");
            }
        }
    }
    return 0;
}
