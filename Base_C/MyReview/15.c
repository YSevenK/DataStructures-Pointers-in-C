#include <stdio.h>

int main() {
    int a, b;
    // 提示输入两个不相等的数
    printf("请输入两个不相等的数：\n");
    scanf("%d%d", &a, &b);
    // 使用三元运算符进行比较和交换
    a = (a > b)? a : b;
    b = (a > b)? b : a;
    // 输出调整后的a和b
    printf("调整后a的值为：%d，b的值为：%d\n", a, b);

    return 0;
}