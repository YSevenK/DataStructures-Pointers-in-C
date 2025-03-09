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
    printf("������һ��������: ");
    scanf("%d", &num);
    int result = sumWithReverse(num);
    printf("%d �����ķ�����֮��Ϊ %d\n", num, result);
    return 0;
}