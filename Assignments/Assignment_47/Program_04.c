#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

void DisplayPrime(PNODE first)
{
    PNODE temp = first;
    int iNo = 0, iCnt = 0;
    bool bPrime = false;

    while(temp != NULL)
    {
        iNo = temp->data;
        bPrime = true;

        if(iNo <= 1)
        {
            bPrime = false;
        }

        for(iCnt = 2; iCnt <= iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bPrime = false;
                break;
            }
        }

        if(bPrime == true)
        {
            printf("| %d | -> ", iNo);
        }

        temp = temp->next;
    }

    printf("NULL\n");
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

    DisplayPrime(head);

    return 0;
}