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
                        printf("50 Ԫ: %d ��, 20 Ԫ: %d ��, 10 Ԫ: %d ��, 5 Ԫ: %d ��\n", fifty, twenty, ten, five);
                    }
                }
            }
        }
    }
    return 0;
}