#include <stdio.h>
#include <stdlib.h>

// 头部插入节点

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Insert(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print()
{
    struct Node *temp;
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
    int i, n, x;
    printf("how many nums: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter nums: \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
}