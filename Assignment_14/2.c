#include <stdio.h>

int main()
{
    int inp[10];
    float sum = 0;

    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &inp[i]);
        sum = sum + inp[i];
    }
    printf("Average : %.2f",sum/10.0);

    return 0;
}