// Singly linear linked list

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

void InsertFirst(PPNODE First, int no)  // Time complexity 0
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       // 1 Allocate memory      

    newn->data = no;                                                     
    newn->next = NULL;                                                   

    if(*First == NULL)          // if linked list is empty
    {
        *First = newn;
    }
    else                        // if linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)   // Time complexity N
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       // 1 Allocate memory      
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)          // if linked list is empty
    {
        *First = newn;
    }
    else                        // if linked list contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp->next = newn;
    }
}

void Display(PNODE First)   // Time complexity N
{
    printf("Elements from the linked list are :\n");
    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int Count(PNODE First)  // Time complexity N
{   
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}


void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)      // Empty LL     A
    {
        return;
    }
    else if((*First) -> next == NULL)       // 1 node in LL     B
    {
        free(*First);
        *First = NULL;
    }
    else        // More than 1 node in LL       C
    {
        (*First) = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)      // Empty LL
    {
        return;
    }
    else if((*First) -> next == NULL)       // 1 node in LL
    {
        free(*First);
        *First = NULL;
    }
    else        // More than 1 node in LL
    {
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt = 0;

    NodeCnt = Count(*First);

    if((ipos < 1) || (ipos > (NodeCnt + 1)))
    {
        printf("Invalid position\n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *First;

        for(iCnt = 0; iCnt < ipos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp -> next = newn;
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);     // InsertFirst(60,51);      Call by address
    InsertFirst(&Head, 21);     // InsertFirst(60,21);
    InsertFirst(&Head, 11);     // InsertFirst(60,11);

    Display(Head);          

    iRet = Count(Head);     
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&Head,101);      // InsertLast(60,101);      
    InsertLast(&Head,111);      // InsertLast(60,111);   
    InsertLast(&Head,121);   

    Display(Head);          

    iRet = Count(Head);     
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&Head,105,5);
    Display(Head);          

    iRet = Count(Head);     
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);
    
    return 0;
}