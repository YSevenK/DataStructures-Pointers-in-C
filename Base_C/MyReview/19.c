#include <stdio.h>
int main()
{
    for (int num = 100; num < 1000; num++)
    {
        int i = num / 100;
        int j = (num / 10) % 10;
        int k = num % 10;
        if (i * i * i + j * j * j + k * k * k == num)
        {
            printf("%d", num);
            printf("\n");
        }
    }

    return 0;
}