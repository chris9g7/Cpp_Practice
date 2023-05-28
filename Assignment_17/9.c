#include <stdio.h>

int main()
{
    char s[20] , temp;
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);

    for (int i = 0; s[i]; i++)
    {
        for (int j = i + 1; s[j]; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("sorted string  %s", s);

    return 0;
}