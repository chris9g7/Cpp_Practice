#include <stdio.h>
#include <math.h>
int main()
{
    float D, a, b, c, roots;
    printf("Enter coffeciant of a, b and c\n");
    scanf("%f%f%f", &a, &b, &c);
    D = b * b - 4 * a * c;

    switch (D > 0)
    {
    case 1:
        roots = -b + sqrt(D) / 2 * a;
        printf("%.2f ", roots);
        break;
    case 0:
        switch (D == 0)
        {
        case 1:
            roots = -b / 2 * a;
            printf("%.2f ", roots);
            break;

        default:
            roots = -b / 2 * a - b + sqrt(4 * a * c - b * b) / 2 * a; // imaginary
            printf("%.2f i", roots);
        }
    }
    return 0;
}
