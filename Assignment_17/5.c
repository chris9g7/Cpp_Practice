
#include <stdio.h>

int main()
{
    char str[15];
    printf("Enter the uppercase string\n");

    fgets(str, 15, stdin);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
  
    }

   printf("%s",str);

    return 0;
}