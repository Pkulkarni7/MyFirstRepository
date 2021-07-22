#include<stdio.h>
#include<malloc.h>
#define MAX 5
void InsertNode(struct node **,struct node **);
void Defragment(struct node **,struct node **);
void Display(struct node *);
void Insert(struct node **);
void Delete(struct node **);

struct node 
{
	int iData;
	struct node * pNext;
};