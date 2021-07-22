#include"Header.h"

void Defragment(struct node **ppStart,struct node **ppEnd)
{
	struct node * pTemp=*ppStart;
	struct node * pTemp2=NULL;

	if(pTemp->iData==0)
	{
		pTemp2=pTemp;
		pTemp=pTemp->pNext;
	}

	do
	{
		if(pTemp->iData==0)
		{
			pTemp2->pNext=pTemp->pNext;
			pTemp->pNext=*ppStart;
			*ppStart=pTemp;
			(*ppEnd)->pNext=*ppStart;
			pTemp=pTemp2->pNext;
		}
		else
		{
			pTemp2=pTemp;
			pTemp=pTemp->pNext;
		}
	}while(pTemp!=(*ppEnd));

	if(pTemp==(*ppEnd) && pTemp->iData==0)
	{
		*ppEnd=pTemp2;
		*ppStart=pTemp;
	}

}
