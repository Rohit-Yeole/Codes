// Singly Circular linked list

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InserFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))        // Empty LL
    {
        *First = *Last = NULL;
        (*Last)->next = *First;
    }
    else        // LL contains atleast one node
    {

    }
}

void Display(PNODE First, PNODE Last)
{
    
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InserFirst(&Head, &Tail, 51);
    InserFirst(&Head, &Tail, 21);
    InserFirst(&Head, &Tail, 11);

    Display(Head, Tail);

    return 0;
}