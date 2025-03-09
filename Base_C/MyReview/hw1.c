#include <stdio.h>

int main()
{
    int chicken, rabbit;
    rabbit = (100 - 40 * 2) / 2;
    chicken = 40 - rabbit;
    printf("鸡有 %d 只，兔有 %d 只。\n", chicken, rabbit);
    return 0;
}