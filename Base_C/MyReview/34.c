#include "stdio.h"
int main()
{
    int a = 10;
    // 整个逗号表达式的值是最后一个子表达式的值。
    a = (3 * 5, a + 4);
    printf("a = % d\n", a);
}