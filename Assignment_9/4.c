#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, a, b, c;

    while (999) // for running infinte loop
    {
        printf("\n1 -> Addition\n");
        printf("2 -> Subtraction\n");
        
        printf("3 -> Multiplication\n");
        printf("4 -> Exit\n");
        printf("Enter your choice\n");

        scanf(" %d", &choice);

        switch (choice)
        {
        case 'a':
            printf("Enter two numbers a and b\n");
            scanf("%d%d", &a, &b);
            printf("Addition : %d", a + b);
            break;

        case 'b':
            printf("Enter two numbers a and b\n");
            scanf("%d%d", &a, &b);
            printf("Subtraction : %d", a - b);
            break;

        case 'c':

            printf("Enter two numbers a and b\n");
            scanf("%d%d", &a, &b);
            printf("Multiplication : %d", a * b);
            break;

        case 'd':

            printf("Enter two numbers a and b\n");
            scanf("%d%d", &a, &b);
            printf("Division : %d", a / b);
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
