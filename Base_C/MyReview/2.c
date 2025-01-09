#include <stdio.h>

int main()
{
    int i, j;

    // 外层for循环，控制整体的行数以及变量i的取值变化
    for (i = 3; i >= 1; i--)
    {
        // 内层for循环，控制每行输出的数字个数以及变量j的取值变化
        for (j = 1; j <= 2; j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}