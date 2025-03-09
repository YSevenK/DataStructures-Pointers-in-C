#include <stdio.h>
#include <string.h>

void deleteDigits(char *number)
{
    int len = strlen(number);
    if (len != 12)
    {
        printf("输入必须是 12 位数字，请重新输入。\n");
        return;
    }
    int k = len - 4;
    char stack[len];
    int top = -1;
    for (int i = 0; i < len; i++)
    {
        while (top >= 0 && k > 0 && stack[top] > number[i])
        {
            top--;
            k--;
        }
        stack[++top] = number[i];
    }
    while (k > 0)
    {
        top--;
        k--;
    }
    printf("原始 12 位整数: %s\n", number);
    printf("删除后的 4 位整数: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
    printf("\n");
}

int main()
{
    char number[13];
    printf("请输入一个 12 位整数: ");
    scanf("%s", number);
    deleteDigits(number);
    return 0;
}