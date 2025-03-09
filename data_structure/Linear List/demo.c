#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int length;
} SqList;

// 初始化线性表
void InitList(SqList *L)
{
    L->length = 0;
}

// 插入元素
int ListInsert(SqList *L, int pos, int elem)
{
    if (pos < 1 || pos > L->length + 1 || L->length == MAX_SIZE)
    {
        return 0; // 插入位置不合法或表已满
    }
    for (int i = L->length; i >= pos; i--)
    {
        L->data[i] = L->data[i - 1];
    }
    L->data[pos - 1] = elem;
    L->length++;
    return 1;
}

// 删除元素
int ListDelete(SqList *L, int pos, int *elem)
{
    if (pos < 1 || pos > L->length)
    {
        return 0; // 删除位置不合法
    }
    *elem = L->data[pos - 1];
    for (int i = pos; i < L->length; i++)
    {
        L->data[i - 1] = L->data[i];
    }
    L->length--;
    return 1;
}

// 查找元素
int LocateElem(SqList L, int elem)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] == elem)
        {
            return i + 1; // 返回位置（从1开始）
        }
    }
    return 0; // 未找到
}

// 打印线性表
void PrintList(SqList L)
{
    for (int i = 0; i < L.length; i++)
    {
        printf("%d ", L.data[i]);
    }
    printf("\n");
}

int main()
{
    SqList L;
    InitList(&L);

    // 插入元素
    ListInsert(&L, 1, 10);
    ListInsert(&L, 2, 20);
    ListInsert(&L, 3, 30);
    printf("插入元素后的线性表: ");
    PrintList(L);

    // 删除元素
    int deletedElem;
    if (ListDelete(&L, 2, &deletedElem))
    {
        printf("删除的元素是: %d\n", deletedElem);
        printf("删除元素后的线性表: ");
        PrintList(L);
    }
    else
    {
        printf("删除元素失败\n");
    }

    // 查找元素
    int pos = LocateElem(L, 30);
    if (pos)
    {
        printf("元素30在线性表中的位置是: %d\n", pos);
    }
    else
    {
        printf("元素30不在线性表中\n");
    }

    return 0;
}
