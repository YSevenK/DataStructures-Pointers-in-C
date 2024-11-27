#include <stdio.h>
#include <stdlib.h>

// 头部插入节点
// 头插法
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // 指向node的指针名为 head

void Insert(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)); // 强转 molloc返回void指针 需要指向Node的指针
    // (*temp).data= x;    // 解引用 访问节点的数据
    temp->data = x;
    //  temp->next = NULL; 链表为空时 head已经是NULL
    //  if (head!=NULL)temp->next=head;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    int i, n, x;
    printf("how many nums? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter the num \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
}