#include <stdio.h>
int main()
{
    int i, n[] = {0, 0, 0, 0, 0};
    for (i = 1; i <= 4; i++)
    {
        n[i] = n[i - 1] * 3 + 1;
        printf("%d ", n[i]);
    }
}