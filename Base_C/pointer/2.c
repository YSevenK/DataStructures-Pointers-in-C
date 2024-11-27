#include <stdio.h>
int main()
{
    // eg1.
    /* int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes\n", sizeof(a));
    printf("address= %d,value is %d\n", p, *p);
    printf("address= %d,value is %d\n", p + 1, *(p + 1));

    void *p0;
    p0=p;
    printf("address is %d", p0);    //  void pointer incalculable */

    // eg2.
    int a = 1025;
    int *p;
    p = &a;
    char *p0;
    p0 = (char *)p;
    printf("size of char is %d bytes\n", sizeof(char));
    printf("address= %d,value is %d\n", p0, *p0);
    // 1025 = 00000000 00000000 00000100 00000001
    // int->char (Data truncation) -> 00000001  -> 1
    printf("address= %d,value is %d\n", p0 + 1, *(p0 + 1));
}