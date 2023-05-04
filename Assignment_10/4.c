#include <stdio.h>
void showNatural(int num);

int main()
{
    int x;
    printf("Enter a number x\n");
    scanf("%d", &x);
    showNatural(x);
    
    return 0;
}

void showNatural(int num)
{
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
}
