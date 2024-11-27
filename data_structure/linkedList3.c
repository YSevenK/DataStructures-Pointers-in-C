#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

// 尾插法
void Insert(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        // 如果链表为空，新节点就是头节点
        head = temp;
        return;
    }
    struct Node *tail = head;
    // 找到链表的尾节点
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    // 将新节点插入到尾节点之后
    tail->next = temp;
}

void Print()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void Delete(int n)
{
    struct Node *temp1 = head;
    if (n == 1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++)
        temp1 = temp1->next;
    struct Node *temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main()
{
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5);
    Print();
    int n;
    printf("enter a position: \n");
    scanf("%d", &n);
    Delete(n);
    Print();

    return 0;
}