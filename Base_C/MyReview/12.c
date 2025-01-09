#include <stdio.h>
int f(int x);
int main()
{
    int n = 1, m;
    m = f(f(f(n)));
    printf("%d\n", m);
}
int f(int x)
{
    return x * 2;
}