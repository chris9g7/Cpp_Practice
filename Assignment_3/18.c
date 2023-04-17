#include <stdio.h>
int main()
{
    int M_no;

    printf("enter the month number\n");
    scanf("%d", &M_no);

    if (M_no == 1 || M_no == 3 || M_no == 5 || M_no == 7 || M_no == 8 || M_no == 10 || M_no == 12)
        printf("31 days\n");

    else if (M_no == 4 || M_no == 6 || M_no == 9 || M_no == 11)
        printf("30 days\n");

    else if (M_no == 2)
        printf("28 days or 29 days\n");

    else
        printf("invalid numberr\n");

    return 0;
}