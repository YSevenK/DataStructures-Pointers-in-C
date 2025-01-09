#include "stdio.h"
int main()
{
    int a[5] = {91, 24, 32, 44, 995};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}