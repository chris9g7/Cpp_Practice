#include <stdio.h>

int main()
{
    float cp, sp, prof, loss, profitPerct, lossPerct, Margin;
    printf("Enter the cost price and selling price of a product\n");
    scanf("%f %f", &cp, &sp);

    prof = sp - cp;
    loss = cp - sp;

    profitPerct = (prof / cp) * 100;
    lossPerct = (loss / cp) * 100;
    Margin = (prof / sp) * 100;

    printf("profit percantge : %.2f%c\n", profitPerct, '%');
    printf("lossPerct : %.2f%c\n", lossPerct, '%');
    printf("Margin: %.2f%c", Margin, '%');

    return 0;
}