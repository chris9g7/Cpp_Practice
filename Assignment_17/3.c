#include <stdio.h>

int main()
{
    char str[20], vow[] = "aeiouAEIOU", count = 0, show;
    printf("Enter a string\n");
    fgets(str, 20, stdin);

    for (int i = 0; vow[i]; i++)
    {
        for (int j = 0; str[j]; j++)
        {
            if (vow[i] == str[j])
            {
                show = vow[i];
                count++;
            }
        }
    }

    printf("vowels : %d", count);

    return 0;
}