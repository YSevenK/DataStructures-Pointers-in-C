//  character arrays and pointers 2

#include <stdio.h>
#include <String.h>

int main()
{
    char c[] = "JOHN";
    //  the size of the array is 5
    //  the length of the array is 4
    //  Because the strlen function does not evaluate null
    printf("size in bytes = %d\n", sizeof(c));
    int len = strlen(c);
    //  Implicit
    printf("length=%d", len);
}