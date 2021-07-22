#include"Header.h"

void Insert(struct node **ppEnd)
{
	int iData;
	struct node *pTemp=*ppEnd;

	
	do
	{
		if(pTemp->iData==0)
		{		
			printf("\nEnter the data to Insert:=");
			scanf_s("%d",&iData);
			printf("\n");
			pTemp->iData=iData;
			*ppEnd=pTemp;
			return;
		}
		pTemp=pTemp->pNext;
	}while(pTemp!=*ppEnd);
	printf("\nList is full\n");
}


void Delete(struct node **ppStart)
{
	int iCounter=1;
	int iPos;
	struct node *pTemp=*ppStart;

	
	while(iCounter<MAX && pTemp->iData==0)
	{
		pTemp=pTemp->pNext;
		iCounter++;
	}
	if(iCounter==MAX)
	{
		printf("\nList is Empty\n");
		return;
	}
	else
	{
		printf("\nEnter the position to delete the node:=");
		scanf_s("%d",&iPos);
		if(iPos<=0 || iPos>MAX)
		{
			printf("\nInvalid position\n");
			return;
		}
		iCounter=1;
		pTemp=*ppStart;
		while(iCounter<=MAX)
		{
			if(iCounter==iPos && pTemp->iData!=0)
			{
				pTemp->iData=0;
				return;
			}
			if(iCounter==iPos && pTemp->iData==0)
			{
				printf("\nElement is already deleted\n");
				return;
			}
			pTemp=pTemp->pNext;
			iCounter++;
		}
	}
}


void Display(struct node *pStart)
{
	struct node *pTemp=pStart;
	do
	{
		printf("|%d|->",pTemp->iData);
		pTemp=pTemp->pNext;
	}while(pTemp!=pStart);
}
