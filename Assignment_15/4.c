#define R 0
#define L 1
#include <stdio.h>

void rotateArray(int b[], int N, int dir, int position);

int main()
{
    int N, a[50], position, dir;

    printf("Enter the size of an array\n");
    scanf("%d", &N);
    printf("Enter the number of position to rotate an array\n");
    scanf("%d", &position);
    printf("Enter the direction \n 1 - left\n 0 - right\n");
    scanf("%d", &dir);

    printf("Enter %d numbers\n", N);
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);

    rotateArray(a, N, dir, position);
    return 0;
}

// this function rotates the value in left/right direction
void rotateArray(int b[], int N, int dir, int position)
{
   if (dir == L)
    {
        while (position)
        {
            int temp = b[0];
            for (int i = 0; i < N - 1; i++)
            {
                b[i] = b[i + 1];
            }
            b[N - 1] = temp;

            position--;
        }
    }
    else
    {
        while (position)
        {
            int temp = b[N - 1];
            for (int i = N - 1; i >= 1; i--)
            {
                b[i] = b[i - 1];
            }
            b[0] = temp;

            position--;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf(" %d", b[i]);
    }
}