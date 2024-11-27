//  character arrays and pointers Ⅰ

#include <stdio.h>

int main()
{
    char c[4];
    c[0] = 'j';
    c[1] = 'o';
    c[2] = 'h';
    c[3] = 'n';
    printf("%s\n",c);

    char ck[5];
    ck[0] = 'j';
    ck[1] = 'o';
    ck[2] = 'h';
    ck[3] = 'n';
    ck[4] = '\0';    // The string must end with null otherwise undefined behavior occurs
    printf("%s\n",ck);
}