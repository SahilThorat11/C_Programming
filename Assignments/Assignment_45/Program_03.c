#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = No;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

void Dispaly(PNODE first)
{
    PNODE temp = NULL;

    temp = first;

    printf("\n");

    while(temp != NULL)
    {
        printf("| %d | -> ", temp -> data);
        temp = temp -> next;
    }

    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;

    PNODE temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        iCount++;
        temp = temp -> next;
    }

    return iCount;
}

void SumDigits(PNODE first)
{
    int iNo = 0, iDigit = 0, iSum = 0;

    PNODE temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        iDigit = 0;
        iSum = 0;

        iNo = temp -> data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        
        printf("| %d | -> ", iSum);
        temp = temp->next;
    }
}

int main()
{
    int iRet = 0, iValue = 0;
    PNODE head = NULL; 

    InsertFirst(&head, 111);
    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Dispaly(head);
    iRet = Count(head);
    printf("Number of nodes in linkedlist are : %d\n", iRet);

    SumDigits(head);

    return 0;
}