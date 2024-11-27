#include <stdio.h>
int main()
{
    int A[] = {2, 4, 5, 8, 1};

    /* eg1 */
    printf("%d \n", A);
    printf("%d \n", &A[0]);
    printf("%d \n", A[0]);
    printf("%d \n", *A);

    /* eg2 */
    int i;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("Address =%d \n", &A[i]);
        printf("Address =%d \n", A + i);
        printf("Value =%d \n", A[i]);
        printf("Value =%d \n", *(A + i));
    }
}