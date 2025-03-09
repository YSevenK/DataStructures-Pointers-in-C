#include <stdio.h>

int reverse(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int sumWithReverse(int num)
{
    return num + reverse(num);
}

int main()
{
    int num;
    printf("请输入一个正整数: ");
    scanf("%d", &num);
    int result = sumWithReverse(num);
    printf("%d 与它的反向数之和为 %d\n", num, result);
    return 0;
}