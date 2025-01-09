#include <stdio.h>
#define S(x) 4 * (x) * x + 1
// 计算过程为 4*(5+2)*5+2+1 不会自动加括号！！！
int main()
{
    int k = 5, j = 2;
    printf("%d\n", S(k + j));
}