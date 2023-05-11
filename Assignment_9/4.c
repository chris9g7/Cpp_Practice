#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice, a, b, c;

    while (999) // for running infinte loop
    {        
        printf("\n1 -> check isosceles triangle\n");
        printf("2 -> check right angled triangle triangle\n");
        printf("3 -> check equilateral triangle\n");
        printf("4 -> Exit\n\n");
        printf("Enter your choice\n");

        scanf("%d", &choice);

         if (choice == 4){
          printf("Exiting...\n");
           return 0;
         }

        printf("Enter the lengths a,b and c\n");
        scanf("%d%d%d", &a, &b, &c);

        switch (choice)
        {
        case 1:
            if (a == b || b == c || c == a)
                printf("Isosceles Triangle");
            else
                printf("Not an Isosceles Triangle");
            break;

        case 2:
            if (a*a == b*b + c*c || b*b == c*c + a*a || c*c == a*a + b*b)
               printf("Right Triangle\n");
            else
                printf("Not a Right Triangle");
            break;

        case 3:
            if ((a == b) && (b == c))
                printf("Equilateral Triangle");
            else
                printf("Not an Equilateral Triangle");
            break;
            
        default:
            printf("Error: Invalid choice\n");
        }
    }
}
