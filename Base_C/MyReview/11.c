#include <stdio.h>
void main()
{
    int x;
    scanf("%d", &x);
    if (x++ > 5)
        printf("%d", x);
    else
        printf("%d\n", x--);
}