#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    return 0;
}

void nextDay(int year, int month, int day)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
    {
        daysInMonth[2] = 29;
    }
    day++;
    if (day > daysInMonth[month])
    {
        day = 1;
        month++;
        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
    printf("%04d-%02d-%02d\n", year, month, day);
}

void nDaysLater(int year, int month, int day, int n)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
    {
        daysInMonth[2] = 29;
    }
    for (int i = 0; i < n; i++)
    {
        day++;
        if (day > daysInMonth[month])
        {
            day = 1;
            month++;
            if (month > 12)
            {
                month = 1;
                year++;
                if (isLeapYear(year))
                {
                    daysInMonth[2] = 29;
                }
                else
                {
                    daysInMonth[2] = 28;
                }
            }
        }
    }
    printf("%04d-%02d-%02d\n", year, month, day);
}

int main()
{
    char date[11];
    int year, month, day;
    printf("请输入日期（yyyy-mm-dd）：");
    scanf("%s", date);
    sscanf(date, "%d-%d-%d", &year, &month, &day);
    printf("下一天的日期是：");
    nextDay(year, month, day);
    printf("20 天后的日期是：");
    nDaysLater(year, month, day, 20);
    printf("80 天后的日期是：");
    nDaysLater(year, month, day, 80);
    return 0;
}