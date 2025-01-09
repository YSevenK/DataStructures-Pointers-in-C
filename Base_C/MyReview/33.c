#include <stdio.h>
int fun(int x)
{
    // 静态局部变量在程序的整个运行期间都存在，其存储空间在程序开始执行时就被分配，并且只会初始化一次
    static int t = 0;
    return (t += x);
}
int main()
{
    int s, i;
    for (i = 1; i <= 5; i++)
        s = fun(i);
    printf("%d\n", s);
}