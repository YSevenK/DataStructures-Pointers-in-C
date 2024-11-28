#include "stdio.h"
#include "stdlib.h"

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

void Insert(int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
        return;
    }
    struct Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = temp;
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
    struct Node *temp2 = head;
    int i;
    for (int i = 0; i < n - 2; i++)
        temp1 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
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

int main()
{
    int n;
    head = NULL;
    Insert(7);
    Insert(9);
    Insert(11);
    Insert(10);
    Print();
    printf("enter the position: ");
    scanf("%d", &n);
    Delete(n);
    Print();
}