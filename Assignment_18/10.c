#include <stdio.h>
void dupFinder(char s[], char freq[130]);

int main()
{
    char s[20], freq[130] = {0};
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);

    dupFinder(s, freq);

    return 0;
}

void dupFinder(char s[], char freq[130])
{

    for (int i = 0; s[i]; i++)
    {
        freq[s[i]]++;
    }

    for (int i = 10; i < 130; i++) // i = 10 bcz fgets add (new line feed automatically and its ascii value is 10 )
    {
        if (freq[i] != 0)
        {
            if (1 < freq[i])
            {
                printf("Repeted character in a string %c\n", i);
            }
        }
    }
}