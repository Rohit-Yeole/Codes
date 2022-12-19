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