#include <stdio.h>

int is_prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }
    if (num % 2 == 0)
    {
        return 0;
    }
    for (int i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int even;
    for (even = 6; even <= 50; even += 2)
    {
        int i;
        for (i = 2; i < even; i++)
        {
            if (is_prime(i))
            {
                int j = even - i;
                if (is_prime(j))
                {
                    printf("%d = %d + %d\n", even, i, j);
                    break;
                }
            }
        }
    }
    return 0;
}