#include <stdio.h>

int main()
{
    int x, y, rotateNum;

    printf("Enter the 3-digit number\n");
    scanf("%d", &x);

    y = x % 10;
    rotateNum = x / 10;
    y = y * 100;

    printf("Rotate number is : %d", rotateNum = y + rotateNum);

    return 0;
}