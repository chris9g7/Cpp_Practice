#include <stdio.h>

int main()
{
    char str[10] = "Batmann", show[2], count = 0;

    printf("Enter a string\n");
    fgets(str, 10, stdin);
    printf("Enter a character\n");
    fgets(show, 2, stdin);

    for (int i = 0; show[i]; i++)
    {
        for (int j = 0; str[j]; j++)
        {
            if (show[i] == str[j])
            {
                count++;
            }
        }
    }

    printf("%c : %d", show[0], count);

    return 0;
}