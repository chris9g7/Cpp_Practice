
#include <stdio.h>

int main()
{
    char str[15];
    printf("Enter the lowercase string\n");

    fgets(str, 15, stdin);

    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
  
    }

   printf("%s",str);

    return 0;
}