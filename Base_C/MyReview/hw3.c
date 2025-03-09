#include <stdio.h>

// 计算阶乘的函数
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int i;
    int sum = 0;
    int sign = 1;
    for (i = 1; i <= 21; i++)
    {
        if ((i % 3 == 2))
        {
            sign = -1;
        }
        else
        {
            sign = 1;
        }
        sum += sign * factorial(i);
    }
    printf("结果是：%d\n", sum);
    return 0;
}