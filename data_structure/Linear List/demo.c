#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct
{
    int data[MAX_SIZE];
    int length;
} SqList;

// ��ʼ�����Ա�
void InitList(SqList *L)
{
    L->length = 0;
}

// ����Ԫ��
int ListInsert(SqList *L, int pos, int elem)
{
    if (pos < 1 || pos > L->length + 1 || L->length == MAX_SIZE)
    {
        return 0; // ����λ�ò��Ϸ��������
    }
    for (int i = L->length; i >= pos; i--)
    {
        L->data[i] = L->data[i - 1];
    }
    L->data[pos - 1] = elem;
    L->length++;
    return 1;
}

// ɾ��Ԫ��
int ListDelete(SqList *L, int pos, int *elem)
{
    if (pos < 1 || pos > L->length)
    {
        return 0; // ɾ��λ�ò��Ϸ�
    }
    *elem = L->data[pos - 1];
    for (int i = pos; i < L->length; i++)
    {
        L->data[i - 1] = L->data[i];
    }
    L->length--;
    return 1;
}

// ����Ԫ��
int LocateElem(SqList L, int elem)
{
    for (int i = 0; i < L.length; i++)
    {
        if (L.data[i] == elem)
        {
            return i + 1; // ����λ�ã���1��ʼ��
        }
    }
    return 0; // δ�ҵ�
}

// ��ӡ���Ա�
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

    // ����Ԫ��
    ListInsert(&L, 1, 10);
    ListInsert(&L, 2, 20);
    ListInsert(&L, 3, 30);
    printf("����Ԫ�غ�����Ա�: ");
    PrintList(L);

    // ɾ��Ԫ��
    int deletedElem;
    if (ListDelete(&L, 2, &deletedElem))
    {
        printf("ɾ����Ԫ����: %d\n", deletedElem);
        printf("ɾ��Ԫ�غ�����Ա�: ");
        PrintList(L);
    }
    else
    {
        printf("ɾ��Ԫ��ʧ��\n");
    }

    // ����Ԫ��
    int pos = LocateElem(L, 30);
    if (pos)
    {
        printf("Ԫ��30�����Ա��е�λ����: %d\n", pos);
    }
    else
    {
        printf("Ԫ��30�������Ա���\n");
    }

    return 0;
}
