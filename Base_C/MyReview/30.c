#include <stdio.h>
int main()
{
    int n[2], i, j;
    for (i = 0; i < 2; i++)
        n[i] = 0;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            n[j] = n[i] + 1;
    printf("%d\n", n[1]);
}