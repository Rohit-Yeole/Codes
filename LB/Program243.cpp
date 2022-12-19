#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();
};

/*
    Return_Value Class_Name :: Function_Name()
*/
DoublyCL :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}
void DoublyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))     // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        newn->next = First;
        (First)->prev = newn;
        First = newn;
    }
    (First)->prev = Last;             
    (Last)->next = First;     
}

void DoublyCL :: InsertLast(int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))     // LL is empty
    {
        First = newn;
        Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCL :: Display()
{
    PNODE temp = First;
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked list is empty "<<"\n";
        return;
    }

    cout<<"Elements of Linked List are : "<<"\n";
    do
    {
        cout<<"|"<<temp->data<<"|<=> ";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

int DoublyCL :: Count()
{
    PNODE temp = First;
    int iCnt = 0;
    if((temp == NULL) && (temp == NULL))
    {
        return iCnt;
    }
    
    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}

void DoublyCL :: DeleteFirst()
{
    if((First == NULL) && (Last == NULL))     // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete First;
        First = NULL;
        Last == NULL;
    }
    else        // More than one node
    {   
        First = (First)->next;
        delete Last->next;        

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL :: DeleteLast()
{
    if((First == NULL) && (Last == NULL))     // Empty LL
    {
        return;
    }
    else if(First == Last)    // Single node
    {
        delete First;
        First = NULL;
        Last == NULL;
    }
    else        // More than one node
    {   
        Last = (Last)->prev;
        delete First->prev;       

        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL :: InsertAtPos(int no, int ipos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int NodeCnt = 0;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid position"<<"\n";
    }
    
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(int iCnt = 0; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DoublyCL :: DeleteAtPos(int ipos)
{
    PNODE temp = NULL;
    int NodeCnt = 0;

    NodeCnt = Count();

    if((ipos < 1) || (ipos > NodeCnt+1))
    {
        cout<<"Invalid position"<<"\n";
    }
    
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(int iCnt = 0; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;   
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp; 
    }
}

int main()
{
    DoublyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertAtPos(105,5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteAtPos(5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}