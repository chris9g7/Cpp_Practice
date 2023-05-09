#include <stdio.h>

int main()
{
    int x;
    printf("Enter the day number of a week\n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("moody monday");
        break;
    case 2:
        printf("top tuesday");
        break;
    case 3:
        printf("wonderful wednesday");
        break;
    case 4:
        printf("thriller thursday");
        break;
    case 5:
        printf("fantastic friday");
        break;
    case 6:
        printf("suprising saturday");
        break;
    case 7:
        printf("super sunday");
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}
