#include "stdio.h"

// 从小到大
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // 假设当前元素最小
        int minIndex = i;
        // 遍历数组 查找是否有比当前元素更小的
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        // 找到比arr[i]更小的元素 交换位置
        if (minIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    int n, i;
    printf("输入数组大小: ");
    scanf("%d", &n);
    int arr[n];
    printf("输入数组内元素(正整数): ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("排序后的数组(从小到大): ");

    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}