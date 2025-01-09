#include <stdio.h>
int main()
{
    int i, j, sum;
    for (i = 3; i >= 1; i--)
    {
        sum = 0;
        for (j = 1; j <= i; j++)
            sum += i * j;
    }
    printf("%d\n", sum);
}