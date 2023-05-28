#include <stdio.h>
#include <string.h>

int main()
{
    char s[10], temp, l;
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);
    l = strlen(s)-1;// bcz it's include \n when we press enter
    
    for (int i = 0, j = l; i <= j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("Reverse string %s", s);

    return 0;
}