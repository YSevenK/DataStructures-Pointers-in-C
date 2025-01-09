#include <stdio.h>

int main()
{
    // 定义数组用于存储30名同学的成绩
    int scores[30];
    // 用于循环输入成绩
    for (int i = 0; i < 30; i++)
    {
        printf("请输入第 %d 名同学的成绩: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // 初始化最高分、最低分和总分
    int maxScore = scores[0];
    int minScore = scores[0];
    int sumScore = 0;

    // 遍历数组，找出最高分、最低分并计算总分
    for (int i = 0; i < 30; i++)
    {
        if (scores[i] > maxScore)
        {
            maxScore = scores[i];
        }
        if (scores[i] < minScore)
        {
            minScore = scores[i];
        }
        sumScore += scores[i];
    }

    // 计算平均分
    float averageScore = (float)sumScore / 30;

    // 输出结果，使用%.1f控制平均分保留一位小数
    printf("最高分: %d\n", maxScore);
    printf("最低分: %d\n", minScore);
    printf("平均分: %.1f\n", averageScore);

    return 0;
}