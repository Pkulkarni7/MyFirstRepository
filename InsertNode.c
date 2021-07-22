#include"Header.h"
void InsertNode(struct node **ppStart,struct node **ppEnd)
{
	int iCounter;
	for(iCounter=0;iCounter<MAX;iCounter++)
	{
		struct node *pTemp=*ppStart;
		struct node *pNewNode=NULL;
		
		pNewNode=(struct node *)malloc(sizeof(struct node));

		if(NULL==pNewNode)
		{
			printf("Memory allocation failed");
			return;
		}
		pNewNode->iData=0;

		if(NULL==*ppStart)//if List is Empty
		{
			*ppStart=pNewNode;
		}
		else//If List having atleast one node
		{
			while(pTemp->pNext!=*ppStart)
				pTemp=pTemp->pNext;
			pTemp->pNext=pNewNode;	
		}
		*ppEnd=pNewNode;
		(*ppEnd)->pNext=*ppStart;
		
	}
}


