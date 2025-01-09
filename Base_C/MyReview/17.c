#include <stdio.h>
int main()
{
    for (int i = 1; i < 20; i++)
    {
        for (int j = 1; j < 33; j++)
        {
            int k = 100 - i - j;
            if (i + j + k == 100 && 5 * i + 3 * j + k / 3 == 100 && k % 3 == 0)
            {
                printf("%d %d %d", i, j, k);
                printf("\n");
            }
        }
    }
    return 0;
}