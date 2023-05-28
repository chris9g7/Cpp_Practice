#include <stdio.h>

int main()
{
    char s[20], freq[150] = {0};
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);

    for (int i = 0; s[i]; i++)
    {
        freq[s[i]]++;
    }

    for (int i = 0; i < 150; i++)
    {
        if (freq[i] != 0)
        {
            printf("%c ==> %d\n", i, freq[i]);
        }
    }

    return 0;
}