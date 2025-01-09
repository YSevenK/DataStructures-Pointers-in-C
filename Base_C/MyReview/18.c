#include <stdio.h>

double calculateY(int m) {
    double y = 0;
    for (int i = 1; i < m; i++) {
        y += 1.0 / (2 * i - 1);
    }
    return y;
}

int main() {
    int m;
    printf("请输入整数m的值：\n");
    scanf("%d", &m);
    double result = calculateY(m);
    printf("根据输入的m=%d，计算得到的y值为：%lf\n", m, result);
    return 0;
}