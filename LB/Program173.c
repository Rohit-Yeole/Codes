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

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 51);     // InsertFirst(60,51);      Call by address
    InsertFirst(&Head, 21);     // InsertFirst(60,21);
    InsertFirst(&Head, 11);     // InsertFirst(60,11);

    Display(Head);          // Call by value

    iRet = Count(Head);     // Call by value

    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&Head,101);      // InsertLast(60,101);      Call by address
    InsertLast(&Head,111);      // InsertLast(60,111);      Call by address

    Display(Head);          // Call by value

    iRet = Count(Head);     // Call by value

    printf("Number of nodes are : %d\n",iRet);
    
    return 0;
}