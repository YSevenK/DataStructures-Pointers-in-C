#include "stdio.h"

// 从大到小
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        if (maxIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}

int main()
{
    int n;
    printf("输入数组大小: ");
    scanf("%d", &n);
    int arr[n];
    printf("输入数组元素: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("排序后的数组: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}