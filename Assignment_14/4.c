#include <stdio.h>

int main()
{
    int inp[10], max = -1;
    printf("Enter the 10 numbers\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &inp[i]);
        
        if (max < inp[i])
            max = inp[i];
    }
    printf("Maximum number : %d", max);

    return 0;
}
