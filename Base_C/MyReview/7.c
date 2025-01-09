#include <stdio.h>
int main()
{
    int i = 5;
    do
    {
        if (i % 3 == 1)
            if (i % 5 == 2)
            {
                printf("*%d", i);
                break;
            }
        i++;
    } while (i != 0);
    printf("\n");
}