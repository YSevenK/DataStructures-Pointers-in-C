#include <stdio.h>
int main()
{
    // eg1.
    /*  int a;
     int *p; // *p is a pointer to an integer
     a = 10;
     p = &a; // &a is the address of a
     int b = 20;
     printf("%d \n", p);
     printf("%d \n", *p);    // dereferencing
     printf("%d \n", &a);
     printf("a=%d \n", a);
     *p = 12; // dereferencing
     printf("a=%d \n", a); */

    // eg2.
    /* int a;
    int *p;
    p = &a;
    printf("%d\n",p);   // wild pointer
    printf("%d\n",*p);  // garbage value
     */

    // eg3.
    /* int a;
    int *p;
    a = 10;
    p = &a; // &a is the address of a
    printf("address of p is %d \n", p);
    printf("Value at p is %d \n", *p);

    int b = 20;
    *p = b;
    printf("address of p is %d \n", p);
    printf("Value at p is %d \n", *p);
 */

    // eg4.
    int a = 10;
    int *p;
    p = &a;
    // pointer arithmetic
    printf("Address p is %d \n", p);
    printf("size of p is %d bytes \n", sizeof(p));
    printf("Address p+1 is %d \n", p + 1); // the size of the integer is 4 bytes
}