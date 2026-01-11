#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int iNO)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNO;
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

void Display(PNODE first)
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

void DisplayEven(PNODE first)
{
    PNODE temp = NULL;

    temp = first;

    printf("Even elements from the linked list are : \n");

    while(temp != NULL)
    {
        if((temp -> data % 2) == 0)
        {
            printf("| %d | -> ", temp -> data);
        }

        temp = temp -> next;
    }
}

int main()
{
    int iRet = 0, iValue = 0, iNode = 0, iCnt = 0;
    PNODE head = NULL;

    printf("How many nodes do you want? : ");
    scanf("%d", &iNode);

    for(iCnt = 1; iCnt <= iNode; iCnt++)
    {
        printf("Enter number %d : ", iCnt);
        scanf("%d", &iValue);
        InsertFirst(&head, iValue);
    }

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n\n", iRet);

    DisplayEven(head);

    return 0;
}
