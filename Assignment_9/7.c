#include <stdio.h>

int main()
{

    float x, amount, total;
    printf("Enter the unit x \n");
    scanf("%f", &x);

    switch (x <= 50)
    {
    case 1:
        amount = x * 0.5;
        break;
    case 0:
        switch (x <= 150)
        {
        case 1:
            amount = 25 + (x - 50) * 0.75;
            break;
        case 0:
            switch (x <= 250)
            {
            case 1:
                amount = 25 + 75 + (x - 150) * 1.20;
                break;

            case 0:
                amount = 25 + 75 + 120 + (x - 250) * 1.5;
                break;
            }
        }
    }
    total = amount + amount * 0.20;
    printf("Total electricity bill : %.2f", total);
    return 0;
}
