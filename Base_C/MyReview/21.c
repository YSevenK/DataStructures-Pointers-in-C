#include <stdio.h>

int main()
{
    int a[4][4] = {
        {4, 0, 0, 0},
        {3, 7, 0, 0},
        {2, 6, 9, 0},
        {1, 5, 8, 10}
    };

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}