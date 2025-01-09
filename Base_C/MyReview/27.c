#include <stdio.h>
int a = 5;
void fun(int b)
{
    int a = 10;
    a += b;
    printf("%d", a);
}
int main()
{
    int c = 20;
    fun(c);
    a += c;
    printf("%d\n", a);
}