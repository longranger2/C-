#include<stdio.h>
#include<stdlib.h>
struct Data
{
	int num;
	struct Data *next;
};
typedef struct Data NODE;

NODE *Create_LinkList();
void Reverse_LinkList(NODE *head);
void Display_LinkList(NODE *head);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		NODE *head;
		head=Create_LinkList();
		if(head==NULL)
			return 0;
		Reverse_LinkList(head);
	}
	
	return 0;
 } 
 
 NODE *Create_LinkList()
 {
 	NODE *head,*tail,*pnew;
 	int score,num;
 	head=(NODE *)malloc(sizeof(NODE));
 	if(head==NULL)
 		return NULL;
 	head->next=NULL;
 	tail=head;
 	scanf("%d",&num);
 	while(num--)
 	{
 		scanf("%d",&score);
 		pnew=(NODE *)malloc (sizeof(NODE));
 		if(pnew==NULL)
 			return NULL;
		pnew->num=score;
		pnew->next=NULL;
		tail->next=pnew;
		tail=pnew;
		 
	 }
	 return(head);
 	
 }
 
 void Reverse_LinkList(NODE *head)
 {
 	//head=head->next;
 	NODE *p,*q;
	q=NULL;
 	while(head)
 	{
 		p=head->next;
 		head->next=q;
 		q=head;
 		head=p;
 	}
 	//printf("%d\n",q->num);
	Display_LinkList(q);
	
 }
 
  void Display_LinkList(NODE *head)
 {
 	NODE *p;
 	for(p=head;p!=NULL;p=p->next)
 		printf("%d ",p->num);
 	printf("\n");
 }
