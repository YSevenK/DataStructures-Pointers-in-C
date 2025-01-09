#include <stdio.h>

int main()
{
    int n = 2, k = 0;
    // 第一次判断while循环条件
    // k初始值0参与逻辑与运算（后置自增，先使用当前值），根据短路特性，不会计算n++ > 2
    // 由于第一次判断循环条件为假，循环体不执行，直接执行后面的printf语句
    while (k++ && n++ > 2);
    printf("%d %d\n", k, n); // 输出1 3
    return 0;
}