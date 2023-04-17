#include <stdio.h>

int main()
{

    int M1, M2, M3, M4, M5;

    printf("Enter the Marks of 5 subjects out of hundred\n");
    scanf("%d%d%d%d%d", &M1, &M2, &M3, &M4, &M5);

    if (M1 >= 33 && M2 >= 33 && M3 >= 33 && M4 >= 33 && M5 >= 33)
        printf("Student is passed");

    else
        printf("student is failed");

    return 0;
}