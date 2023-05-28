#include <stdio.h>

int main()
{
    char s1[10], s2[10],i;
    printf("Enter s1 string\n");
    fgets(s1, sizeof s1, stdin);

    for (i = 0; s1[i]; i++)
    {
        s2[i] = s1[i];
    }
     s2[i] = '\0';

   printf("s2 : %s",s2);

    return 0;
}