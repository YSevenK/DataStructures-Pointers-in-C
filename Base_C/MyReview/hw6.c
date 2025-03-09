#include <stdio.h>

int main()
{
    int fifty, twenty, ten, five;
    for (fifty = 1; fifty <= 9; fifty++)
    {
        for (twenty = 1; twenty <= 13; twenty++)
        {
            for (ten = 1; ten <= 19; ten++)
            {
                five = 30 - fifty - twenty - ten;
                if (five >= 1)
                {
                    if (50 * fifty + 20 * twenty + 10 * ten + 5 * five == 500)
                    {
                        printf("50 元: %d 张, 20 元: %d 张, 10 元: %d 张, 5 元: %d 张\n", fifty, twenty, ten, five);
                    }
                }
            }
        }
    }
    return 0;
}