#include <stdio.h>
#include <stdlib.h>

int main()
{
    char choice;
    int num1, num2;
    while (999) // for running infinte loop
    {
        printf("\na -> Addition\n");
        printf("b -> Subtraction\n");
        printf("c -> Multiplication\n");
        printf("d -> Division\n");
        printf("e -> Exit\n");
        printf("Enter your choice\n");

        scanf(" %c", &choice);

        switch (choice)
        {
        case 'a':
            printf("Enter two numbers num1 and num2\n");
            scanf("%d%d", &num1, &num2);
            printf("Addition : %d", num1 + num2);
            break;

        case 'b':
            printf("Enter two numbers num1 and num2\n");
            scanf("%d%d", &num1, &num2);
            printf("Subtraction : %d", num1 - num2);
            break;

        case 'c':

            printf("Enter two numbers num1 and num2\n");
            scanf("%d%d", &num1, &num2);
            printf("Multiplication : %d", num1 * num2);
            break;

        case 'd':

            printf("Enter two numbers num1 and num2\n");
            scanf("%d%d", &num1, &num2);
            printf("Division : %d", num1 / num2);
            break;

        case 'e':

            printf("Exiting...\n");

            return 0; // for exiting the program
            // exit(0) we can use as well

        default:
            printf("Error: Invalid choice\n");
        }
        
    }
}
