#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("������һ����Ȼ�� n��");
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        int is_prime = 1;
        if (i == 2)
        {
            is_prime = 1;
        }
        else if (i <= 1)
        {
            is_prime = 0;
        }
        else if (i % 2 == 0)
        {
            is_prime = 0;
        }
        else
        {
            for (int j = 3; j * j <= i; j += 2)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime)
        {
            sum += i;
        }
    }
    printf("%d ���ڵ�ȫ������֮��Ϊ��%d\n", n, sum);
    return 0;
}