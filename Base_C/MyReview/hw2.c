#include <stdio.h>

int main()
{
    int cock, hen, chick;
    for (cock = 0; cock <= 100 / 3; cock++)
    {
        for (hen = 0; hen <= 100 / 5; hen++)
        {
            chick = 100 - cock - hen;
            if (3 * cock + 5 * hen + chick / 3.0 == 100 && chick % 3 == 0)
            {
                printf("公鸡: %d 只, 母鸡: %d 只, 小鸡: %d 只\n", cock, hen, chick);
            }
        }
    }
    return 0;
}