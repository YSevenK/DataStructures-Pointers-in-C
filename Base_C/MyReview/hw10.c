#include <stdio.h>
#include <string.h>

void deleteDigits(char *number)
{
    int len = strlen(number);
    if (len != 12)
    {
        printf("��������� 12 λ���֣����������롣\n");
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
    printf("ԭʼ 12 λ����: %s\n", number);
    printf("ɾ����� 4 λ����: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
    printf("\n");
}

int main()
{
    char number[13];
    printf("������һ�� 12 λ����: ");
    scanf("%s", number);
    deleteDigits(number);
    return 0;
}