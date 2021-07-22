#include"Header.h"

int main()
{
	int iNo;
	//int iData;
	/*int iCount=1;*/
	struct node *pFirst=NULL;
	struct node *pLast=NULL;
	struct node *pInsertPointer=NULL;

	InsertNode(&pFirst,&pLast);
	Display(pFirst);
	printf("\n");
	
	pInsertPointer=pFirst;
	while(1)
	{
		printf("\n\n1.Insert\n2.Delete\n3.Defragment\n4.Exit\nselect the option:=");
		scanf_s("%d",&iNo);
		switch(iNo)
		{
			case 1:

				Insert(&pInsertPointer);
				printf("\n");
				Display(pFirst);
				break;
	
			case 2:
				Delete(&pFirst);
				printf("\n");
				Display(pFirst);
				break;

			case 3:
				Defragment(&pFirst,&pLast);
				printf("\n");
				printf("The Defragmented List is:\n");
				printf("\n");
				Display(pFirst);
				pInsertPointer=pFirst;
				break;

			case 4:
				return 0;
		}
	}
}


