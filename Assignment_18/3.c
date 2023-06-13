#include <stdio.h>
#include <string.h>
char compString(char str1[], char str2[]);
int main()
{
    char str1[20], str2[20];

    printf("Enter string1\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string2\n");
    fgets(str2, sizeof(str2), stdin);

    compString(str1, str2) == 0 ? printf("Both strings are equal") : printf("strings are not equal");

    return 0;
}

char compString(char str1[], char str2[])
{
    return strcmp(str1, str2);
}
