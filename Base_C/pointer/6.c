// Pointer application
#include <stdio.h>

void Increment(int p)
{
    p = p + 1;
}

void IncrementPointer(int *p)
{
    // call by reference
    *p = *p + 1;
}

int main()
{
    int a = 10;
    a = 10;
    Increment(a);
    printf("普通方法：%d\n", a);
    IncrementPointer(&a);
    printf("换成指针：%d\n", a);
}