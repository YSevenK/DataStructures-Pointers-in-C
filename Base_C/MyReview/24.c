#include <stdio.h>

int k = 0;
void fun(int m)
{
    m = m + k;
    k = k + m;
    printf("m=%d k=%d \n", m, k++);
}
int main()
{
    int i = 4;
    fun(i++);

    printf("i=%d k=%d \n", i, k);
}