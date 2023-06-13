
#include <stdio.h>
void countWords(char str[]);
int main()
{
    char str[30];

    printf("Enter the string\n");
    fgets(str, sizeof str, stdin);

    countWords(str);

    return 0;
}

void countWords(char s[])
{
    int word = 1;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
            word++;
    }
    printf("Total words in this string: %d", word);
}